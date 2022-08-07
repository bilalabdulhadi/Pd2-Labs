#include <stdio.h>


int fun(int *, int);

int main() {
    int n;
    printf("Enter the number of the elements: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: \n");
    int array[n];

    for(int i=0; i < n; i++) {
        printf("array[%d]: ",i+1);
        scanf("%d", &array[i]);
    }
    printf("The number of the odd number is: %d", fun(array, n));
    return 0;
}

int fun(int *array, int n) {
    if(n == 0) {
        return 0;
    } else {
        return *(array+n-1) % 2 + fun(array, n-1);
    }
}