#include <stdio.h>
/*
    S1. Klavyeden öğrenci sayısı (en fazla 100) ve ders geçme notunu alarak bu bilgileri tanımlanacak “hesapla” fonksiyonuna
    gönderen bir “main” fonksiyonu hazırlayınız. “hesapla” fonksiyonu kendisine gelen öğrenci sayısı kadar notu klavyeden
    okuyarak 100 elemanlı bir diziye kaydetmeli ve geçme notuna göre kaç tane öğrencinin dersten kaldığını bularak
    fonksiyondan ge ri döndürürken, sınıf ortalamasını da ekrana yazdırmalıdır. Buna göre aşağıda verilen alanlara “main” ve
    “hesapla” fonksiyonlarını yazınız.
    Write a "main" function that takes the number of students (less than or equal to 100) and the passing grade from the
    keyboard and sends this information to the "calculate" function. The "calculate" function will read grades of each
    student from the keyboard and record them in an array with 100 elements. According to the passing grade, find out
    how many students failed and return it from function, and print the class average on the function. Accordingly, write
    "main" and "calculate" functions in the following fields.
    */

int Calculate(int , int);

int main() {
    int passing_grade, number;
    printf("Enter Passing grade: ");
    scanf("%d", &passing_grade);
    printf("Enter The number of the students \n  [Less than or equal to 100]: ");
    scanf("%d", &number);

    int failed_std = Calculate(passing_grade, number);
    printf("\n>>> Passed students : %d", number - failed_std);
    printf("\n>>> Failed students : %d\n", failed_std);

    return 0;
}

int Calculate(int passing_grade, int number){
    int std[100], sum = 0, counter = 0;

    for(int i=0; i<number; i++){
        printf(" %d. grade: ", i+1);
        scanf("%d", &std[i]);
        if(std[i] < passing_grade) counter++;
        sum += std[i];
    }
    printf("\n\n>>> Average: %.2f", (float)sum/number);
    return counter;
}