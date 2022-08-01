#include <stdio.h>

/* S5. Bir dairenin alanını hesaplayan programı yazın.
 * Kısıtlar:
 * • Dairenin yarıçapı kullanıcıya sorularak klavyeden girilmelidir ve fonksiyon main fonksiyounu
 *   içerisinden çağrılmalıdır.
 * • Fonksiyon prototipi: float Circle (const int r)
 * • Pi sayısı 3.14 dür ve programın başında sabit olarak tanımlanmalıdır.
 * • Sonuç ekrana yazdırılırken küsürat ‘2’ olacak şekilde olmalıdır.
 */

#define pi 3.1415
float Circle(const int);

int main() {
    const int radius;
    printf("Please the radius of the Circle [cm]: ");
    scanf("%d", &radius);

    printf(">>> The Area of the Circle is: %.2f cm^2\n", Circle(radius));
    return 0;
}

float Circle(const int r) {
    return pi * r * r;
}