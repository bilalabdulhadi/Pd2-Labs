#include <stdio.h>
#include <string.h>
#include <malloc.h>

/*
    S2. Verilen cümle içerisinde verilen kelimeyi arayan ve eğer kelime cümlede varsa bulunduğu yerlerin başlangıç
    indisini ekrana yazdıran programın kodunu yazınız.
    Q2. Write a program that searches for the given string in the given sentence and if the word is found then prints the
    starting index of the places of this word to the screen.
*/
int main() {
    char *word, *str;
    word = (char *) malloc(20 * sizeof(char));
    str = (char *) malloc(200 * sizeof(char));
    printf("Enter a sentence: ");
    gets(str);
    printf("Enter a word: ");
    scanf("%s", word);

    char *result;
    result = strstr(str, word);
    if (result) {
        printf("\nThe word has been found.\n>>> Starting index: %d", result-str);
    } else {
        printf("\nThe word has Not been found.");
    }

    return 0;
}
