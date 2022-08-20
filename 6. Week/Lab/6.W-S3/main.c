#include <stdio.h>
#include <string.h>
#include <malloc.h>
/*
    S3. Klavyeden girilen text bir ifadeyi okuyan ve bu text in içindeki harflerin sayısını veren programı dinamik
    bellek yönetimi kullanarak yazınız.
    Q3. Write a program that reads a string entered from the keyboard and find frequency of characters in this string
    using dynamic memory management.
*/
int main() {
    char *str;
    str = (char *) malloc(200 * sizeof(char));
    printf("Enter a sentence: ");
    gets(str);
    int j = 0, counter = 0;

    for (int i = 0; i < 26; i++) {
        while (*(str + j) != '\0') {
            if((*(str + j) >= 65 && *(str + j) <= 90) || (*(str + j) >= 97 && *(str + j) <= 122)) {
                if (*(str + j) == i + 65 || *(str + j) == i + 97) counter++;
            }
            j++;
        }
        if(counter != 0) printf("%c repeated %d times.\n", i + 65, counter);
        j = 0;
        counter = 0;
    }

    return 0;
}
