#include <stdio.h>
#include <string.h>

/* Q14. Predict the output of following C programs */

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
void printBook (struct Books book);

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
    printBook(book1);

    printf("\n");

    /* Print Book 1 info */
    printBook(book2);
    return 0;
}

void printBook (struct Books book) {
    printf("Book Id: %d\n", book.book_id);
    printf("Book Title: %s\n", book.title);
    printf("Book Author: %s\n", book.author);
    printf("Book Subject: %s\n", book.subject);
}