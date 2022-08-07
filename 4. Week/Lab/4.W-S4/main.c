#include <stdio.h>

int Sum(int n){
    if (n == 1)
        return n;
    else
        return (n + Sum(n - 1));
}
void main(void){
    int num = 6;
    printf("Result: %d", Sum(num));
}