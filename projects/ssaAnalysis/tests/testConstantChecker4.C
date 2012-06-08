#include "sccAssertion.h"

int main(int argc, char ** argv) {
    int a = 1;
    int b = 4;
    a=a+b;
    assert_constant(a,5);
    a=b-a;
    assert_constant(a,-1);
    a=a*a;
    assert_constant(a,1);
    a=10%b;
    assert_constant(a,2);
    return 0;
}
