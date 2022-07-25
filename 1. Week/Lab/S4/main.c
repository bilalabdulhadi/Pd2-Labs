#include <stdio.h>

// S4. Aşağıdaki kod parçalarını yazarak ekran çıktılarını yorumlayınız

void fonk(void);
void fonk_sta(void);

int main(void) {
    fonk();
    fonk_sta();

    printf("\n");

    fonk();
    fonk_sta();

    return 0;
}

void fonk(void)
{
    int id = 1;
    printf("fonk() id değişken değeri: %d\n", id);
    id = id +21;
    printf("fonk() id değişken değeri: %d\n", id);

}

void fonk_sta(void)
{
    static int id = 1;

    printf("fonk_sta() id değişken değeri: %d\n", id);
    id = id + 21;
    printf("fonk_sta() id değişken değeri: %d\n", id);
}
