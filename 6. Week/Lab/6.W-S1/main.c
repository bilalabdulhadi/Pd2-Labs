#include <stdio.h>
#include <string.h>
#include <malloc.h>

/*
    S1. Klavyeden girilen iki kelimenin aynı olup olmadığını aynı değillerse hangisinin kelime olarak daha uzun
    olduğunu belirten program kodunu yazınız.
    Q1. The program code that identifies whether two string entered from the keyboard are the same or not, and which
    one is longer as a word.
*/
int main() {
    char *word1 = (char *) malloc(sizeof(char) * 20);
    char *word2 = (char *) malloc(sizeof(char) * 20);
    printf("Enter 1. Word: ");
    scanf("%s", word1);
    printf("Enter 2. Word: ");
    scanf("%s", word2);

    int i = 0, status = 1;
    while (status == 1 && *(word1 + i) != '\0') {
        if(*(word1+i) != *(word2 + i)) status = 0;
        i++;
    }
    if(!status) {
        printf("\n>>> The entered words are not the same.\n");
        (strlen(word1) > strlen(word2)) ? printf(">>> 1. Word is longer.") : printf(">>> 2. Word is longer.");
        printf("\n1. Word length: %d\n2. Word length: %d", strlen(word1), strlen(word2));
    } else {
        printf("\n>>> The entered words are the same.");
        printf("\nThe long of the words is: %d", strlen(word1));
    }
    return 0;
}
