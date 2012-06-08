#include "sccAssertion.h"

int main(int argc, char ** argv) {
    int a = 1;
    int b = (a=3)+1;
    assert_constant(a,3);
    assert_constant(b,4);
    return 0;
}
