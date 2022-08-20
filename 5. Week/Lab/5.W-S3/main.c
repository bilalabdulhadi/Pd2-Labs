#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

/*
    S3. Öncelikle sadece adınız için gerekli olan minimum bellek alanını malloc ile ayırınız. Daha sonra
    soyadınızı da eklemek için bu bellek alanını realloc ile genişletiniz.
    Q3. First, allocate the minimum memory space required for your name with malloc. Then expand this
    memory area with realloc to include your last name.
*/
int main() {
    char *name;
    name = (char*) malloc(10 * sizeof(char));
    printf("Enter name: ");
    scanf("%s", name);
    int surname[20];
    printf("Enter surname: ");
    scanf("%s", surname);

    name = realloc(name, strlen(surname) * sizeof(char));

    strcat(name, " ");
    strcat(name, surname);
    printf("Fullname: %s", name);
    return 0;
}
