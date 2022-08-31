#include <stdio.h>

/* Q6. Point out the error( if any) in the following code. */

enum sanfoundry{
    a, b, c
};
enum sanfoundry g;
int main() {
    g++;
    printf("%d", g);
    return 0;
}
