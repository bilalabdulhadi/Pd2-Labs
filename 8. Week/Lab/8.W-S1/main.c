#include <stdio.h>

/* Q1. Predict the output of following C programs */

enum day {sunday = 1, tuesday, wednesday, thursday, friday, saturday};

int main() {
    enum day d = thursday;
    printf("The day number stored in d is %d", d);
    return 0;
}
