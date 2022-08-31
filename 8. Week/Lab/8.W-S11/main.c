#include <stdio.h>

/* Q11. Predict the output of following C programs. */

enum sanfoundry{
    a = 1, b
};
enum sanfoundry1{
    c, d
};

int main() {
    enum sanfoundry1 s1 = c;
    enum sanfoundry1 s = a;
    enum sanfoundry s2 = d;
    printf("%d\n", s);
    printf("%d\n", s1);
    printf("%d\n", s2);
    return 0;
}
