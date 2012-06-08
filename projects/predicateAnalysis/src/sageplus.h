#ifndef _SAGEPLUS_H

#define _SAGEPLUS_H

namespace cat
{
  // tag classes
  struct Node {};
  struct Stmt : Node {};
  struct Branch /* NO BASE CLASS */ {};  // covers both statements and expressions

  struct Expr : Node {};
  struct Binary : Expr {};
  struct ShortCircuit : Binary {};
  struct Comparison : Binary {};

  struct Unary : Expr {};

  // tag mappings
  template <class T> struct PredicateKind;

  template <> struct PredicateKind<SgNode>               { typedef Node kind; };

  template <> struct PredicateKind<SgStatement>          { typedef Stmt kind; };
  template <> struct PredicateKind<SgIfStmt>             { typedef Branch kind; };
  template <> struct PredicateKind<SgForStatement>       { typedef Branch kind; };
  template <> struct PredicateKind<SgWhileStmt>          { typedef Branch kind; };
  template <> struct PredicateKind<SgDoWhileStmt>        { typedef Branch kind; };
  template <> struct PredicateKind<SgUpcForAllStatement> { typedef Branch kind; };

  template <> struct PredicateKind<SgExpression>         { typedef Expr kind; };
  template <> struct PredicateKind<SgUnaryOp>            { typedef Unary kind; };
  template <> struct PredicateKind<SgBinaryOp>           { typedef Binary kind; };

  // not really an expression but currently handled as such
  template <> struct PredicateKind<SgInitializedName>    { typedef Expr kind; };

  template <> struct PredicateKind<SgAndOp>              { typedef ShortCircuit kind; };
  template <> struct PredicateKind<SgOrOp>               { typedef ShortCircuit kind; };

  template <> struct PredicateKind<SgEqualityOp>         { typedef Comparison kind; };
  template <> struct PredicateKind<SgNotEqualOp>         { typedef Comparison kind; };
  template <> struct PredicateKind<SgLessOrEqualOp>      { typedef Comparison kind; };
  template <> struct PredicateKind<SgLessThanOp>         { typedef Comparison kind; };
  template <> struct PredicateKind<SgGreaterOrEqualOp>   { typedef Comparison kind; };
  template <> struct PredicateKind<SgGreaterThanOp>      { typedef Comparison kind; };

  template <> struct PredicateKind<SgConditionalExp>     { typedef Branch kind; };

  template <class T>
  struct PredicateKind
  {
    typedef typename PredicateKind<typename T::base_node_type>::kind kind;
  };

  template <class AstNode>
  typename PredicateKind<AstNode>::kind
  tag(const AstNode&)
  {
    typedef typename PredicateKind<AstNode>::kind TagType;

    return TagType();
  }
}


namespace sg
{
  template <class Iterator, class PrinterCreator>
  struct ForeachPrinter
  {
    Iterator       aa;
    Iterator       zz;
    PrinterCreator create_printer;

    ForeachPrinter(const Iterator& first, const Iterator& last, PrinterCreator prn_maker)
    : aa(first), zz(last), create_printer(prn_maker)
    {}

    void print_each(std::ostream&) const;
  };

  template <class Iterator, class PrinterCreator>
  void ForeachPrinter<Iterator, PrinterCreator>::print_each(std::ostream& s) const
  {
    std::for_each(aa, zz, create_printer(s));
  }

  template <class InputIterator, class PrinterCreator>
  ForeachPrinter<InputIterator, PrinterCreator>
  foreach(InputIterator first, InputIterator last, PrinterCreator prn)
  {
    typedef ForeachPrinter<InputIterator, PrinterCreator> Result;

    return Result(first, last, prn);
  }

  template <class Container, class PrinterCreator>
  ForeachPrinter<typename Container::const_iterator, PrinterCreator>
  foreach(const Container& cont, PrinterCreator prn)
  {
    return foreach(cont.begin(), cont.end(), prn);
  }

  template <class Iterator, class PrinterCreator>
  std::ostream& operator<<(std::ostream& s, const ForeachPrinter<Iterator, PrinterCreator>& fp)
  {
    fp.print_each(s);

    return s;
  }

  struct SequencePrinter
  {
    std::ostream& os;

    explicit
    SequencePrinter(std::ostream& ostream)
    : os(ostream)
    {}

    template<class Element>
    void operator()(const Element& elem)
    {
      os << elem << " ";
    }
  };

  SequencePrinter prn(std::ostream& os)
  {
    return SequencePrinter(os);
  }

  /// \brief Encapsulates the compare_equal function family for tree based
  ///        comparisons of (some) expression nodes.
  /// \details invoked through the tree_compare function.
  /// \note  any operation that relies on same type requirements compares
  ///        raw types. i.e., type modifiers/typedefs/references are not skipped!
  /// \note  Only some compare_equal functions are implemented at this time.
  ///        Notably NOT IMPLEMENTED are:
  ///        SgStatementExpression -- how to compare two statements
  ///        SgPseudoDestructorRefExp -- ???
  ///        Vararg - operations
  ///        all Java, Fortran, Python, CUDA, ASM node types.
  /// \note  missing comparison functions can be implemented by providing
  ///        the missing overloads for the compare functions (see below).
  /// \todo  instead of relying on static member functions, it might be more
  ///        flexible to use a comparator object.
  struct TreeComparator
  {
    /// error branch, currently only expression-comparison is implemented
    static int compare(const SgNode&,           const SgNode&);

    /// \brief uses traversal successors to compare all children
    /// \pre   typeid(lhs) == typeid(rhs)
    static int compare(const SgExpression& lhs, const SgExpression& rhs);

    /// \return compares unified variable symbol
    static int compare(const SgVarRefExp&,      const SgVarRefExp&);

    /// \return compares unified function symbol
    static int compare(const SgFunctionRefExp&, const SgFunctionRefExp&);

    /// \return compares unified member function symbol
    static int compare(const SgMemberFunctionRefExp&, const SgMemberFunctionRefExp&);

    /// \return compares unified label symbol
    static int compare(const SgLabelRefExp&,    const SgLabelRefExp&);

    /// \return compares unified class symbol
    static int compare(const SgThisExp&,        const SgThisExp&);

    /// \return compares the stringified representation of constant folded values
    /// \note   can return true, even though the types of the expression may differ
    static int compare(const SgValueExp&,       const SgValueExp&);

    /// \return true
    static int compare(const SgNullExpression&, const SgNullExpression&);

    /// \return compares the types of the new object and children expressions
    static int compare(const SgNewExp&,         const SgNewExp&);

    /// \return compares the declaration (pointer comparison)
    static int compare(const SgLambdaRefExp&,   const SgLambdaRefExp&);

    /// \return  compare the type (of the expressions)
    /// \note    size(0) and size(int) compare equal.
    ///          But size(int) and size(const int) do not!
    static int compare(const SgSizeOfOp&,                 const SgSizeOfOp&);

    /// \return  compare the type (of the expressions)
    /// \details see compare for SgSizeOfOp
    static int compare(const SgUpcLocalsizeofExpression&, const SgUpcLocalsizeofExpression&);

    /// \return  compare the type (of the expressions)
    /// \details see compare for SgSizeOfOp
    static int compare(const SgUpcElemsizeofExpression&,  const SgUpcElemsizeofExpression&);

    /// \return  compare the type (of the expressions)
    /// \details see compare for SgSizeOfOp
    static int compare(const SgUpcBlocksizeofExpression&, const SgUpcBlocksizeofExpression&);

    /// \return  compare the type (of the expressions)
    /// \details see compare for SgSizeOfOp
    static int compare(const SgTypeIdOp&,                 const SgTypeIdOp&);
  };

  /// \brief   handles the dual type recovery of two AstNodes for equality comparison
  ///          i.e., two nodes can only be equal if their dynamic type is the same.
  /// \details invoke through sg::compare function
  /// \tparam  a class offering one or more compare functions (see TreeComparator
  ///          for an example.
  template <class NodeComparator>
  struct NodeComparisonHandler : sg::DispatchHandler<int>
  {
    const SgNode&         right_node;

    explicit
    NodeComparisonHandler(const SgNode& rhs_node)
    : Base(0), right_node(rhs_node)
    {}

    void handle(const SgNode& n) { sg::unexpected_node(n); }

    template <class AstExpr>
    void handle(const AstExpr& lhs)
    {
      res = NodeComparator::compare(lhs, dynamic_cast<const AstExpr&>(right_node));
    }
  };

  //
  // compare_equal is an internal function family;

  template <class NodeComparator>
  bool compare(const SgExpression* lhs, const SgExpression* rhs);

  /// invokes equal using the TreeComparator class
  int tree_compare(const SgExpression* lhs, const SgExpression* rhs);

  int TreeComparator::compare(const SgNode& lhs, const SgNode&)
  {
    sg::unexpected_node(lhs);
    return false;
  }

  template <class NodeComparator>
  int compare_children(const SgExpression& lhs, const SgExpression& rhs)
  {
    // get_numberOfTraversalSuccessors and get_traversalSuccessorByIndex are not
    // defined over const-nodes :(
    SgExpression& ll = const_cast<SgExpression&>(lhs);
    SgExpression& rr = const_cast<SgExpression&>(rhs);

    const size_t  sz_lhs = ll.get_numberOfTraversalSuccessors();
    ROSE_ASSERT(sz_lhs == rr.get_numberOfTraversalSuccessors());

    // loop condition variables
    int           comp = 0;
    size_t        i = 0;

    while ((comp == 0) && (i < sz_lhs))
    {
      const SgExpression* llnext = isSgExpression(ll.get_traversalSuccessorByIndex(i));
      const SgExpression* rrnext = isSgExpression(rr.get_traversalSuccessorByIndex(i));
      ROSE_ASSERT(llnext && rrnext);

      comp = sg::dispatch(NodeComparisonHandler<NodeComparator>(*rrnext), llnext);
      ++i;
    }

    return comp;
  }

  int TreeComparator::compare(const SgExpression& lhs, const SgExpression& rhs)
  {
    return compare_children<TreeComparator>(lhs, rhs);
  }

  int TreeComparator::compare(const SgValueExp& lhs, const SgValueExp& rhs)
  {
    return lhs.get_constant_folded_value_as_string().compare(rhs.get_constant_folded_value_as_string());
  }


  /// \brief compares the address of unified objects
  /// \pre   @l and @r are not null have the same dynamic type
  static
  int _unified_object_compare(const void* l, const void* r)
  {
    // \todo can we return l - r?

    if (l == r) return 0;
    if (l < r) return -1;
    return 1;
  }

  template <class AstNode>
  static
  int unified_object_compare(const AstNode* l, const AstNode* r)
  {
    ROSE_ASSERT(l && r && (typeid(*l) == typeid(*r)));

    return _unified_object_compare(l, r);
  }

  template <class AstNode>
  static inline
  int sym_compare(const AstNode& lhs, const AstNode& rhs)
  {
    return unified_object_compare(lhs.get_symbol(), rhs.get_symbol());
  }

  int TreeComparator::compare(const SgVarRefExp& lhs, const SgVarRefExp& rhs)
  {
    return sym_compare(lhs, rhs);
  }

  int TreeComparator::compare(const SgFunctionRefExp& lhs, const SgFunctionRefExp& rhs)
  {
    return sym_compare(lhs, rhs);
  }

  int TreeComparator::compare(const SgMemberFunctionRefExp& lhs, const SgMemberFunctionRefExp& rhs)
  {
    return sym_compare(lhs, rhs);
  }

  int TreeComparator::compare(const SgLabelRefExp& lhs, const SgLabelRefExp& rhs)
  {
    return sym_compare(lhs, rhs);
  }

  int TreeComparator::compare(const SgThisExp& lhs, const SgThisExp& rhs)
  {
    return unified_object_compare(lhs.get_class_symbol(), rhs.get_class_symbol());
  }

  int TreeComparator::compare(const SgNullExpression&, const SgNullExpression&)
  {
    return true;
  }

  int TreeComparator::compare(const SgNewExp& lhs, const SgNewExp& rhs)
  {
    // compare types first
    int res = unified_object_compare(lhs.get_specified_type(), rhs.get_specified_type());

    if (res) return res;

    // then treat the new-nodes as expressions and compare their children
    return TreeComparator::compare(static_cast<const SgExpression&>(lhs), rhs);
  }

  int TreeComparator::compare(const SgLambdaRefExp& lhs, const SgLambdaRefExp& rhs)
  {
    // this assumes that function declarations for lambda functions are unified
    return unified_object_compare(lhs.get_functionDeclaration(), rhs.get_functionDeclaration());
  }

  template <class AstNode>
  static inline
  bool type_oper_compare(const AstNode& lhs, const AstNode& rhs)
  {
    return get_type(lhs) == get_type(rhs);
  }

  int TreeComparator::compare(const SgSizeOfOp& lhs, const SgSizeOfOp& rhs)
  {
    return type_oper_compare(lhs, rhs);
  }

  int TreeComparator::compare(const SgUpcLocalsizeofExpression& lhs, const SgUpcLocalsizeofExpression& rhs)
  {
    return type_oper_compare(lhs, rhs);
  }

  int TreeComparator::compare(const SgUpcBlocksizeofExpression& lhs, const SgUpcBlocksizeofExpression& rhs)
  {
    return type_oper_compare(lhs, rhs);
  }

  int TreeComparator::compare(const SgUpcElemsizeofExpression& lhs,  const SgUpcElemsizeofExpression& rhs)
  {
    return type_oper_compare(lhs, rhs);
  }

  int TreeComparator::compare(const SgTypeIdOp& lhs, const SgTypeIdOp& rhs)
  {
    return type_oper_compare(lhs, rhs);
  }


  template <class NodeComparator>
  int compare(const SgExpression& lhs, const SgExpression& rhs)
  {
    const int res = lhs.variantT() - rhs.variantT();

    // if same type, compare the children
    if (res) return res;

    return sg::dispatch(NodeComparisonHandler<NodeComparator>(rhs), &lhs);
  }

  template <class NodeComparator>
  int compare(const SgExpression* lhs, const SgExpression* rhs)
  {
    ROSE_ASSERT(lhs && rhs);
    return compare<NodeComparator>(*lhs, *rhs);
  }

  int tree_compare(const SgExpression* lhs, const SgExpression* rhs)
  {
    ROSE_ASSERT(lhs && rhs);
    return compare<TreeComparator>(*lhs, *rhs);
  }

  struct ConditionRetriever : sg::DispatchHandler<const SgLocatedNode*>
  {
    ConditionRetriever()
    : Base(0)
    {}

    void handle(const SgNode& n) { sg::unexpected_node(n); }

    // not a branch
    void handle(const SgNode&, cat::Node) {}

    // conditional branch
    void handle(const SgConditionalExp& n)
    {
      res = n.get_conditional_exp();
    }

    // branches
    template <class AstNode>
    void handle(const AstNode& n, cat::Branch)
    {
      res = test_statement(n);
    }

    template <class AstNode>
    void handle(const AstNode& n)
    {
      handle(n, cat::tag(n));
    }
  };

  const SgLocatedNode*
  retrieve_condition(const SgNode& n)
  {
    return sg::dispatch(ConditionRetriever(), &n);
  }

  bool isCondition_aux(const SgLocatedNode& n)
  {
    // true, iff this is the condition of its parent
    return &n == retrieve_condition(sg::deref(n.get_parent()));
  }

  bool isCondition(const SgVariableDeclaration& n) { return isCondition_aux(n); }
  bool isCondition(const SgExpression& n)          { return isCondition_aux(n); }

  bool isCondition(const SgInitializedName& n)
  {
    return false; // \todo isCondition_aux(n.get_parent());
  }

  static inline
  bool isBoolType(const SgType* n)
  {
    // \todo use sage type query interface to skip references, typedefs, etc.
    return isSgTypeBool(n);
  }
}



#endif /* _SAGEPLUS_H */
