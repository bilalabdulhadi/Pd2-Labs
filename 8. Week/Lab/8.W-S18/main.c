#include <stdio.h>
#include <malloc.h>

/*
    Q18. Write C program to store data in structures dynamically. (In this example, you should to store the
    information entered by the user using dynamic memory allocation.)
*/
struct student {
    int number;
    char name[20];
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student *std;
    std = (struct student *) malloc(n * sizeof(struct student));

    for(int i = 0; i<n; i++) {
        printf("<<< Enter %d. Student info:\n", i+1);
        printf("Number: ");
        scanf("%d", &(std+i)->number);
        printf("Name: ");
        scanf("%s", (std+i)->name);
    }
    printf("\n");

    for(int i = 0; i<n; i++) {
        printf(">>> %d. Student:\n", i+1);
        printf("Number: %d\n", (std+i)->number);
        printf("Name: %s\n", (std+i)->name);
        printf("\n");
    }
    return 0;
}
