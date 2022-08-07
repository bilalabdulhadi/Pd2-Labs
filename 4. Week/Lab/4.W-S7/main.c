#include <stdio.h>

void fun(int);

int main() {
    fun(25);
    return 0;
}

void fun(int n) {
    if (n == 0)
        return;
    fun(n / 2);
    printf("%d", n % 2);
}