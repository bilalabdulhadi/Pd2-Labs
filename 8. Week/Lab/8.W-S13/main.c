#include <stdio.h>
#include <string.h>

/* Q13. Predict the output of following C programs */
struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main() {
    struct Books book1;     /* Declare Book 1 of type Book */
    struct Books book2;     /* Declare Book 2 of type Book */

    /* Book 1 specification */
    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Nuha Ali");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 6495407;

    /* Book 1 specification */
    strcpy(book2.title, "Telecom Billing");
    strcpy(book2.author, "Zara Ali");
    strcpy(book2.subject, "Telecom Billing Tutorial");
    book2.book_id = 6495700;

    /* Print Book 1 info */
    printf("Book 1 Id: %d\n", book1.book_id);
    printf("Book 1 Title: %s\n", book1.title);
    printf("Book 1 Author: %s\n", book1.author);
    printf("Book 1 Subject: %s\n", book1.subject);

    printf("\n");
    /* Print Book 1 info */
    printf("Book 2 Id: %d\n", book2.book_id);
    printf("Book 2 Title: %s\n", book2.title);
    printf("Book 2 Author: %s\n", book2.author);
    printf("Book 2 Subject: %s\n", book2.subject);
    return 0;
}
