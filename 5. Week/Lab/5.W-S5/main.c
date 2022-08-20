#include <stdio.h>
#include <malloc.h>

/*
    S5. Pointer kullanarak bir dizi tanımlayınız ve dizinin boyutunu kullanıcıya sorunuz. Dizinin
    elemanlarını kullanıcıdan alınız. Daha sonra dizide yeni bir alan oluşturun ve yeni elemanları kullanıcıdan
    alınız. En son yeni dizinin elemanlarını ekrana basınız. (Dinamik bellek yönetimi kullanılmalı.)
    Q5. First, define an array and ask the user for array size. Then, get the elements of array
    from user, too. After that, allocate new space in the array and get new elements. Finally, dump the
    resulting array to scree. (Use dynamic memory allocation.)
*/
int main() {
    int size, size1, *array;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    array = (int *)malloc(sizeof(int)*size);
    for (int i = 0; i < size; i++) {
        printf("%d. : ", i+1);
        scanf("%d", array+i);
    }
    printf("Enter the number of the extra elements: ");
    scanf("%d", &size1);
    array = (int *) realloc(array, (size + size1) * sizeof(int));
    for (int i = 0; i < size1; i++) {
        printf("%d. : ", size+i+1);
        scanf("%d", array + size+i);
    }

    printf("\n>>> Old Elements: \n");
    for (int i = 0; i < size1 + size; i++) {
        if(i == size) printf("\n>>> New Elements :\n");
        printf("%d. : %d\n", i+1, *(array + i));

    }

    return 0;
}
