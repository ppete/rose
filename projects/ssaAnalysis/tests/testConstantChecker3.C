#include "sccAssertion.h"

int main(int argc, char ** argv) {
    int a = 1;
    int b = 4;
    int c = a+b;
    assert_constant(c,5);
    return 0;
}
