#include <stdio.h>
#include <stdlib.h>

/*
    S1. Toplam eleman sayısını kullanıcıdan alarak bu sayı kadar bellekten calloc fonksiyonunu kullanarak gerekli
    yeri alınız. Ayırdığınız bu bellek alanına eleman sayısı kadar değeri kullanıcıdan alınız. Daha sonra girilen
    en büyük değeri tanımladığınız işaretçi değişkeni kullanarak bulunuz ve ekrana yazdırınız.
    Q1. By taking the total number of elements from the user, take the necessary place by using the calloc
    function from memory. The number of elements in this memory area you allocate is taken from the user.
    Then find the largest value entered using the pointer variable you have defined and print it on the screen.
*/

int main() {
    int number, *arr;
    printf("Enter number of elements: ");
    scanf("%d", &number);
    arr = (int *) calloc(number,sizeof(int));

    for (int i = 0; i < number; i++) {
        printf("[%d]: ",i+1);
        scanf("%d", (arr + i));
    }
    int largest = *arr;
    for (int i = 0; i < number; i++) {
        if(largest < *(arr +  i)) largest = *(arr +i);
    }
    printf("The largest element: %d", largest);
    return 0;
}

