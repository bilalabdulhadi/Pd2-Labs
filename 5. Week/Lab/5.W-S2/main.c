#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    S2. Adınız soyadınız için gerekli minimum char bellek alanını malloc fonksiyonu kullanarak ayırınız ve
    içerisine strcpy fonksiyonunu kullanarak adınızı ve soyadınızı arada boşluk bırakarak yazınız.
    Q2. Allocate the minimum char memory space required for your name and surname using the malloc
    function. Then use the strcpy function to write your name and surname with spaces to this variable.
*/
int main() {
    char *name, *surname, *fullname;
    name = (char*) malloc(20 * sizeof(char));
    surname = (char*) malloc(20 * sizeof(char));
    fullname = (char*) malloc(20 * sizeof(char));
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your surname: ");
    scanf("%s", surname);

    strcpy(fullname, name);
    strcat(fullname, " ");
    strcat(fullname, surname);
    free(name);
    free(surname);
    printf("\nFullname: %s", fullname);

    return 0;
}
