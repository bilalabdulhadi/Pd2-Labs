#include <stdio.h>

/* Q7. What will be the output of the following C code if input given is 2 ? */

enum day{
    a, b, c = 5, d, e
};

int main() {
    printf("Enter the value for a: ");
    scanf("%d", a);
    printf("%d", a);
    return 0;
}
