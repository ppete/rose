#include "sccAssertion.h"

int main(int argc, char ** argv) {
    int a = 1;
    a=1;
    assert_constant(a,1);
    a=2;
    assert_constant(a,2);
    return 0;
}
