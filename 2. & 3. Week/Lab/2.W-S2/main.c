#include <stdio.h>

/*
    S2. Boy ve kilo bilgisini alarak vücut kitle indeksini hesaplayan kitleIndeks isimli bir fonksiyon yazınız. Bu fonksiyon aşağıda
    verilen tabloya göre değer döndürmektedir. Yazdığınız fonksiyonu main fonksiyonunda çağırarak kullanın ve bir
    program yazınız. Programın örnek çalışması şekilde verildiği gibi olmalıdır. Vücut kitle indeksi hesabı aşağıda verilmiştir.
    Write a function named bodyIndex that computes body mass index by taking height and weight information.
    Write a program that calls the function in the main. The sample output of the program should be as it is
    given.
*/

int bodyIndex() {
    float weight, height;
    printf("Weight [kg]: ");
    scanf("%f", &weight);
    printf("Height [m]: ");
    scanf("%f", &height);
    float BMI = weight / (height * height);

    if(BMI > 0 && BMI <= 18){
        return 1;
    } else if(BMI >= 19 && BMI <= 25) {
        return 2;
    } else if(BMI >= 26 && BMI <= 30) {
        return 3;
    } else if(BMI > 30) {
        return 4;
    }
}

int main() {
    int option = bodyIndex();

    printf(">>> The Status is: ");
    switch (option) {
        case 1:
            printf("Thin");
            break;
        case 2:
            printf("Normal");
            break;
        case 3:
            printf("Fat");
            break;
        default:
            printf("Obese");
    }
    return 0;
}
