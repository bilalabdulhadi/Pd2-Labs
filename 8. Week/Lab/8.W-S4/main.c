#include <stdio.h>
/* Q4. Predict the output of following C programs. */

enum example {a = 1, b, c};
enum example example1 = 2;
enum example answer() {
    return example1;
}
int main() {
    (answer() == a) ? printf("yes") : printf("no");
    return 0;
}
