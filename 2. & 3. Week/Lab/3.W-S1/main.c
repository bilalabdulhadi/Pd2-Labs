#include <stdio.h>

/*
    S1. Main fonksiyonu içerisinde verilen bir doğal sayıya kadar olan (bu sayı dahil) tüm sayıların
    toplamını rekürsif bir fonksiyon kullanarak hesaplayanız.
    Calculate the sum of all numbers (including this number) up to a natural number given in the main function
    using a recursive function.
*/

int Sum(int);

int main() {
    int num;
    printf("Please enter number: ");
    scanf("%d", &num);
    printf("\n>>> The sum form 0 To %d is: %d\n", num, Sum(num));
    return 0;
}

int Sum(int n) {
    if(n >= 0){
        return n + Sum(n - 1);
    } else {
        return 0;
    }
}