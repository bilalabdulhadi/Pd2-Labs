#include <stdio.h>
#include <stdlib.h>

/* Q15. Predict the output of following C programs. */

struct person {
    int age;
    float weight;
    char name[30];
};
int main() {
    struct person *ptr;
    int n;

    printf("Enter the number of persons: ");
    scanf("%d", &n);

    ptr = (struct person *) malloc(n * sizeof(struct person));

    for(int i =0; i < n; i++) {
        printf("Enter %d. name and age respectively: ", i+1);
        scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);
    }

    printf("\nDisplaying Information: \n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s\tAge: %d\n", (ptr+i)->name, (ptr+i)->age);
    }
    return 0;
}
