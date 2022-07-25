#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int a, b, sum, sum1, counter = 1;
    srand(time(NULL));

    a = 1 + rand() % 6;
    b = 1 + rand() % 6;
    sum = a + b;
    printf(">>> %d , %d : %d \n\n", a, b, sum);

    if(sum == 7 || sum == 11){
        printf("congratulations, you won the game.\n");
    } else if(sum == 2 || sum == 3 || sum == 12){
        printf("Unfortunately, you lost the game.\n");
    }
    else if(sum == 4 || sum == 5 || sum == 6 || sum == 8 || sum == 9 || sum == 10){
        printf("Your point : %d\n", sum);
        printf("You have to try again.\n");
        while (1){
            a = 1 + rand() % 6;
            b = 1 + rand() % 6;
            counter++;
            sum1 = a + b;
            //printf("\n>>> %d , %d : %d \n", a, b, sum1);
            if(sum1 == 7){
                printf("\nYour point : %d\n", sum1);
                printf("Unfortunately, you lost the game.\n");
                break;
            }
            else if(sum1 == sum){
                printf("\nYour point : %d\n", sum1);
                printf("congratulations, you won the game.\n");
                break;
            }
        }
    }
    printf("The number of throws is : %d\n", counter);

    return 0;
}
