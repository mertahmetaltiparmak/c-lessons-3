#include <stdio.h>
#include <stdlib.h>

struct dogumTarihi {
    int day;
    int month;
    int year;
};
int main() {

    struct dogumTarihi past;
    struct dogumTarihi now;

    printf("Dogum tarihinizi giriniz:");
    scanf("%d%d%d", &past.day, &past.month, &past.year);

    printf("Bugunun tarihini girin:");
    scanf("%d%d%d", &now.day, &now.month, &now.year);

    if (past.day > now.day) {
        now.day += 30;
        now.month -= 1;
    }    
    if (past.month > now.month) {
        now.month += 12;
        now.year -= 1;
    }
    printf("\nYasadiginiz sure:");
    printf("%d gun, %d ay, %d yil\n", now.day - past.day, now.month - past.month, now.year - past.year);
    printf("\nTebrikler\n");

    system("pause");
    return 0;
}