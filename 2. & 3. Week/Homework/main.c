#include <stdio.h>

// Write a recursive function that finds the given power of a given number.

int power(int, int );

int main() {
    int a, b;
    printf("Enter your base number: ");
    scanf("%d", &a);
    printf("Enter the power number: ");
    scanf("%d", &b);

    printf("The result is: %d", power(a, b));
    return 0;
}

int power(int a, int b){
    if(b == 0){
        return 1;
    } else {
        return a * power(a, b - 1);
    }
}