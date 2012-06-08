#include "sccAssertion.h"

int main(int argc, char ** argv) {
    int a = 1;
    a++;
    assert_constant(a,2);
    ++a;
    assert_constant(a,3);
    a--;
    assert_constant(a,2);
    --a;
    assert_constant(a,1);
    return 0;
}
