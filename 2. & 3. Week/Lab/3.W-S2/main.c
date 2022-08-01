#include <stdio.h>
/*
    S2. Girilen dizideki en büyük elemanı bulan programı C dilinde Rekürsif olarak yazınız.
    Write a recursion program that finds the largest element in the entered array in C language.
*/

int largest_Element(int [], int);

int main() {
    int num, A[200];
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    printf("Series elements:\n");
    for (int i = 0; i < num; i++) {
        printf("A[%d]: ", i+1);
        scanf("%d", &A[i]);
    }
    printf("The largest element is: %d", largest_Element(A, num-1));
    return 0;
}

int largest_Element(int A[], int n) {
    int max;
    if(n == 0){
        return A[0];
    } else {
        max =  largest_Element(A, n-1);
        if(max < A[n-1]) {
            return  A[n-1];
        } else {
            return max;
        }
    }
}