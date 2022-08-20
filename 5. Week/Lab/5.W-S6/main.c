#include <stdio.h>
#include <malloc.h>
#include <string.h>
/*
    S6. Bir cümlenin kelimelerini sondan başa doğru yazan programı dinamik bellek yönetimi kullanarak
    oluşturunuz.
    Q6. Write a program using dynamic memory allocation that prints out words of a str
    in reverse order.
    Örnek (Example):
    Input: I love Programming Languages course
    Output: course Languages Programming love I
*/

int main() {
    char *newSentence, *str = (char *) malloc(200 * sizeof(char));
    printf("Enter your str: ");
    gets(str);
    int i, start, length, lastindex, size;
    length = strlen(str);
    lastindex = length;
    newSentence = (char *) malloc(length * sizeof(char));
    start = 0;
    i = 0;

    while (i >= 0) {
        for (i = length - 1; str[i] != '\0' && str[i] != ' '; i--) lastindex--;
        size = length - lastindex;
        strncpy(&newSentence[start], &str[lastindex], size);
        start += size;
        newSentence[start] = ' ';
        start++;
        lastindex--;
        length = lastindex;
    }
    for (i = 0; str[i] != '\0'; i++) str[i] = newSentence[i];
    free(newSentence);
    printf("\n>>> %s", str);
    return 0;
}
