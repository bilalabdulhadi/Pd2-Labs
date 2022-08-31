#include <stdio.h>
#include <malloc.h>

/*
    Q17. Write C program to store information of students using structure. (In this example, you should store the
    information of 5 students by using an array of structures.)
*/

struct student {
    int number;
    char name[20];
};

struct student students[5];
int main() {

    for(int i = 0; i<5; i++) {
        printf("<<< %d. Student:\n", i+1);
        printf("Number: ");
        scanf("%d", &students[i].number);
        printf("Name: ");
        scanf("%s", students[i].name);
    }
    printf("\n");

    for(int i = 0; i<5; i++) {
        printf(">>> %d. Student:\n", i+1);
        printf("Number: %d\n", students[i].number);
        printf("Name: %s\n", students[i].name);
        printf("\n");
    }
    return 0;
}
