
#include <stdio.h>


// S1. Aşağıdaki kod parçasının ekran çıktısı nasıl olmalıdır?

int x = 5;
int main(){
    {
        int x = 10, y = 20;
        {
            printf("x = %d, y = %d\n", x, y);

            {
                int y = 40;
                x++;
                y++;
                printf("x = %d, y = %d\n", x, y);
            }
            printf("x = %d, y = %d\n", x, y);
        }
    }
    printf("x = %d", x);
    return 0;
}
