/* For each function (SgAsmFunction) process each instruction (SgAsmInstruction) through the instruction semantics
 * layer using the FindConstantsPolicy. Output consists of each instruction followed by the registers and memory locations
 * with constant or pseudo-constant values. */

#define __STDC_FORMAT_MACROS
#include "rose.h"
#include "findConstants.h"
#include "IntervalSemantics.h"
#include "PartialSymbolicSemantics.h"
#include "SymbolicSemantics.h"
#include "YicesSolver.h"
#include "NullSemantics.h"
#include "MultiSemantics.h"
#include <set>
#include <inttypes.h>

using namespace BinaryAnalysis::InstructionSemantics;

#if 1==POLICY_SELECTOR
#   define TestValueTemplate XVariablePtr
    struct TestPolicy: public FindConstantsPolicy {
        void startInstruction(SgAsmInstruction *insn) {
            addr = insn->get_address();
            newIp = number<32>(addr);
            if (rsets.find(addr)==rsets.end())
                rsets[addr].setToBottom();
            cur_state = rsets[addr];
            currentInstruction = isSgAsmx86Instruction(insn);
        }
        void dump(SgAsmInstruction *insn) {
            std::cout <<unparseInstructionWithAddress(insn) <<"\n"
                      <<cur_state
                      <<"    ip = " <<newIp <<"\n";
        }
    };

#elif  2==POLICY_SELECTOR
#   define TestValueTemplate XVariablePtr
    struct TestPolicy: public FindConstantsABIPolicy {
        void startInstruction(SgAsmInstruction *insn) {
            addr = insn->get_address();
            newIp = number<32>(addr);
            if (rsets.find(addr)==rsets.end())
                rsets[addr].setToBottom();
            cur_state = rsets[addr];
            currentInstruction = isSgAsmx86Instruction(insn);
        }
        void dump(SgAsmInstruction *insn) {
            std::cout <<unparseInstructionWithAddress(insn) <<"\n"
                      <<cur_state
                      <<"    ip = " <<newIp <<"\n";
        }
    };
#elif  3==POLICY_SELECTOR
#   define TestSemanticsScope PartialSymbolicSemantics
#   define TestValueTemplate PartialSymbolicSemantics::ValueType
    struct TestPolicy: public PartialSymbolicSemantics::Policy<> {
        void dump(SgAsmInstruction *insn) {
            std::cout <<unparseInstructionWithAddress(insn) <<"\n"
                      <<get_state()
                      <<"    ip = " <<get_ip() <<"\n";
        }
    };
#elif  4==POLICY_SELECTOR
#   define TestSemanticsScope SymbolicSemantics
#   define TestValueTemplate SymbolicSemantics::ValueType
    struct TestPolicy: public SymbolicSemantics::Policy<> {
        TestPolicy() {
#           if 1==SOLVER_SELECTOR
                YicesSolver *solver = new YicesSolver;
                solver->set_linkage(YicesSolver::LM_EXECUTABLE);
                set_solver(solver);
#           elif 2==SOLVER_SELECTOR
                YicesSolver *solver = new YicesSolver;
                solver->set_linkage(YicesSolver::LM_LIBRARY);
                set_solver(solver);
#           endif
                //solver->set_debug(stderr);
        }
        void dump(SgAsmInstruction *insn) {
            std::cout <<unparseInstructionWithAddress(insn) <<"\n";
            print(std::cout, "    ");
        }
    };
#elif 5==POLICY_SELECTOR
#   define TestSemanticsScope NullSemantics
#   define TestValueTemplate NullSemantics::ValueType
    struct TestPolicy: public NullSemantics::Policy<> {
        void dump(SgAsmInstruction *insn) {
            std::cout <<unparseInstructionWithAddress(insn) <<"\n"
                      <<"    null state\n";
        }
    };
#elif 6==POLICY_SELECTOR
#   define TestSemanticsScope MultiSemantics<                                                                                  \
        PartialSymbolicSemantics::ValueType, PartialSymbolicSemantics::State, PartialSymbolicSemantics::Policy,                \
        SymbolicSemantics::ValueType, SymbolicSemantics::State, SymbolicSemantics::Policy                                      \
        >
#   define TestValueTemplate TestSemanticsScope::ValueType
    struct TestPolicy: public TestSemanticsScope::Policy<TestSemanticsScope::State, TestSemanticsScope::ValueType> {
        void dump(SgAsmInstruction *insn) {
            std::cout <<unparseInstructionWithAddress(insn) <<"\n"
                      <<*this;
        }
    };
#elif 7==POLICY_SELECTOR
#   define TestSemanticsScope IntervalSemantics
#   define TestValueTemplate IntervalSemantics::ValueType
    struct TestPolicy: public IntervalSemantics::Policy<> {
        void dump(SgAsmInstruction *insn) {
            std::cout <<unparseInstructionWithAddress(insn) <<"\n"
                      <<get_state();
        }
    };
#else
#error "Invalid policy selector"
#endif
typedef X86InstructionSemantics<TestPolicy, TestValueTemplate> Semantics;


/* Analyze a single interpretation a block at a time */
static void
analyze_interp(SgAsmInterpretation *interp)
{
    /* Get the set of all instructions except instructions that are part of left-over blocks. */
    struct AllInstructions: public SgSimpleProcessing, public std::map<rose_addr_t, SgAsmx86Instruction*> {
        void visit(SgNode *node) {
            SgAsmx86Instruction *insn = isSgAsmx86Instruction(node);
            SgAsmFunction *func = SageInterface::getEnclosingNode<SgAsmFunction>(insn);
            if (func && 0==(func->get_reason() & SgAsmFunction::FUNC_LEFTOVERS))
                insert(std::make_pair(insn->get_address(), insn));
        }
    } insns;
    insns.traverse(interp, postorder);

    while (!insns.empty()) {
        std::cout <<"=====================================================================================\n"
                  <<"=== Starting a new basic block                                                    ===\n"
                  <<"=====================================================================================\n";
        AllInstructions::iterator si = insns.begin();
        SgAsmx86Instruction *insn = si->second;
        insns.erase(si);

        TestPolicy policy;
        Semantics semantics(policy);


        /* Perform semantic analysis for each instruction in this block. The block ends when we no longer know the value of
         * the instruction pointer or the instruction pointer refers to an instruction that doesn't exist or which has already
         * been processed. */
        while (1) {
            /* Analyze current instruction */
            try {
                semantics.processInstruction(insn);
                policy.dump(insn);
            } catch (const Semantics::Exception &e) {
                std::cout <<e <<"\n";
                break;
#if 3==POLICY_SELECTOR
            } catch (const TestPolicy::Exception &e) {
                std::cout <<e <<"\n";
                break;
#endif
            } catch (const SMTSolver::Exception &e) {
                std::cout <<e <<" [ "<<unparseInstructionWithAddress(insn) <<"]\n";
                break;
            }

            /* Never follow CALL instructions */
            if (insn->get_kind()==x86_call || insn->get_kind()==x86_farcall)
                break;

            /* Get next instruction of this block */
#if 3==POLICY_SELECTOR || 4==POLICY_SELECTOR
            TestValueTemplate<32> ip = policy.get_ip();
            if (!ip.is_known()) break;
            rose_addr_t next_addr = ip.known_value();
#elif 5==POLICY_SELECTOR || 7==POLICY_SELECTOR
            TestValueTemplate<32> ip = policy.readRegister<32>(semantics.REG_EIP);
            if (!ip.is_known()) break;
            rose_addr_t next_addr = ip.known_value();
#elif 6==POLICY_SELECTOR
            TestValueTemplate<32> ip = policy.readRegister<32>(semantics.REG_EIP);
            if (!ip.get_subvalue(TestSemanticsScope::SP0()).is_known()) break;
            rose_addr_t next_addr = ip.get_subvalue(TestSemanticsScope::SP0()).known_value();
#else
            if (policy.newIp->get().name) break;
            rose_addr_t next_addr = policy.newIp->get().offset;
#endif
            si = insns.find(next_addr);
            if (si==insns.end()) break;
            insn = si->second;
            insns.erase(si);
        }
    }
}

/* Analyze only interpretations that point only to 32-bit x86 instructions. */
class AnalyzeX86Functions: public SgSimpleProcessing {
public:
    size_t ninterps;
    AnalyzeX86Functions(): ninterps(0) {}
    void visit(SgNode* node) {
        SgAsmInterpretation *interp = isSgAsmInterpretation(node);
        if (interp) {
            const SgAsmGenericHeaderPtrList &headers = interp->get_headers()->get_headers();
            bool only_x86 = true;
            for (size_t i=0; i<headers.size() && only_x86; ++i)
                only_x86 = 4==headers[i]->get_word_size();
            if (only_x86) {
                ++ninterps;
                analyze_interp(interp);
            }
        }
    }
};

int main(int argc, char *argv[]) {
    SgProject *project = frontend(argc, argv);
    AnalyzeX86Functions analysis;
    analysis.traverse(project, postorder);
    if (0==analysis.ninterps) {
        std::cout <<"file(s) didn't have any 32-bit x86 headers.\n";
    } else {
        std::cout <<"analyzed headers: " <<analysis.ninterps<< "\n";
    }
    return 0;
}
