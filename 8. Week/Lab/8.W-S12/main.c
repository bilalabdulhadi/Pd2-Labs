#include <stdio.h>

/*
    S12. Ders devam listesinde bulunan öğrenciler için kullanılacak ‘student’ isimli struct yapısını, ‘number’, ‘name’, ‘surname’, ve
    ‘midtermGrade’ alanlarından oluşacak şekilde tanımlayınız. Tanımladığınız bu yapıyı kullanarak 10 öğrenci için bir struct
    dizisi oluşturunuz ve klavyeden 3 öğrencinin bilgilerini alınız. Daha sonra bilgileri alınan öğrencilerin bilgilerini ekrana
    yazdırınız.
    Q12. Define a struct named ‘student’ for course attendance list of students. This struct consists of ‘number’, ‘name’, ‘surname’,
    and ‘midtermGrade’ fields. Using this struct you defined, create a struct array for 10 students and get the information of 3
    students from the keyboard. Then, print the information of the students whose information was entered.
*/
struct student {
    int number;
    char name[20];
    char surname[20];
    float midtermGrade;
};
struct student students[10];

int main() {
    for(int i = 0; i<3; i++) {
        printf("<<< %d. Student:\n", i+1);
        printf("Number: ");
        scanf("%d", &students[i].number);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Surname: ");
        scanf("%s", students[i].surname);
        printf("Midterm Grade: ");
        scanf("%f", &students[i].midtermGrade);
    }
    printf("\n");

    for(int i = 0; i<3; i++) {
        printf(">>> %d. Student:\n", i+1);
        printf("Number: %d\n", students[i].number);
        printf("Name: %s\n", students[i].name);
        printf("Surname: %s\n", students[i].surname);
        printf("MidtermGrade: %.2f\n", students[i].midtermGrade);
        printf("\n");
    }
    return 0;
}
