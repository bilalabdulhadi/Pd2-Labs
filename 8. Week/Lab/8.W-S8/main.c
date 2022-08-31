#include <stdio.h>

/* Q8. What will be the output of the following C code if the code is executed on a 32 bit platform? */

enum sanfoundry {
    c = 0,
    d = 10,
    h = 20,
    s = 3
}a;

int main() {
    a = c;
    printf("Size of enum variable = %d bytes", sizeof(a));
    return 0;
}
