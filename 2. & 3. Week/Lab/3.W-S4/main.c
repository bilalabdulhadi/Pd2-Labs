#include <stdio.h>

/*
    S4. Main fonksiyonu içerisinde verilen iki pozitif sayıyı kullanarak bu sayıların en büyük ortak bölenini rekürsif
    bir fonksiyon kullanarak bulunuz.
    Using the two positive numbers given in the main function, find the largest common divisor of these
    numbers using a recursive function.
*/

int GCD(int, int); // Greatest Common Divisor

int main() {
    int num1, num2, gcd;
    printf("Enter 1. number: ");
    scanf("%d", &num1);
    printf("Enter 2. number: ");
    scanf("%d", &num2);

    if(num1 < num2){
        int empty = num1;
        num1 = num2;
        num2 = empty;
    }

    printf("\n>>> The GCD of %d & %d is: %d\n", num1, num2, GCD(num1, num2));
    return 0;
}

int GCD(int num1, int num2) {
    if(num2 == 0) {
        return num1;
    }
    else {
        return GCD(num2, num1 % num2);
    }
}