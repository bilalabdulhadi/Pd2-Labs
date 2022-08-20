#include <stdio.h>

/*
    S3. Main fonksiyonu içerisinde verilen sayının basamaklarını toplamını rekürsif bir fonksiyon kullanarak
    bulunuz.
    Q3. Write a recursion function to sum the digits of the number given in the main function.
*/

int digit_Sum(int);

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("\n>>> The sum of the digits is: %d\n", digit_Sum(num));
    return 0;
}

int digit_Sum(int num){
    if(num != 0) {
        return num%10 + digit_Sum(num/10);
    } else {
        return 0;
    }
}