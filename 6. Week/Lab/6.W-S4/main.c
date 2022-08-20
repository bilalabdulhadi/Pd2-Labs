#include <stdio.h>
#include <string.h>
#include <malloc.h>

/*
    S4. Belli bir metinde veya cümledeki kelimeleri sayan C programını dinamik bellek kullanarak yazınız.
    Q4. Write the C program using dynamic memory, which counts the words in a given text or sentence.
*/
int main() {
    char *str;
    str = (char *) malloc(200 * sizeof(char));
    printf("Enter a sentence: ");
    gets(str);

    int i = 0, counter = 0;
    while (*(str + i) != '\0') {
        if(*(str + i) == 32 || *(str + i + 1) == '\0') counter++;
        i++;
    }
    printf("\n>>> The number of word is: %d", counter);
    return 0;
}
