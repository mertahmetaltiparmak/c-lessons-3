#include <stdio.h>
#include <stdlib.h>

int main() {
    char adim[] = "Mert ";
    char soyadim[] = "Altiparmak";
    printf("adimin uzulugu:%d\n", strlen(adim));
    // girilen stringin uzunlugunu girer.
    printf("adimin bellekteki byte cinsinden degeri:%d\n\n", sizeof(adim));
    // girilen degerin kullandigi alani byte cinsinden verir \0 yani null karakterinide sayar m e r t \0 hepsi birer byte total 5
    // [] icine deger girseydik onu yazardi.
    // strcat(adim, soyadim);
    // iki stringi birlestirir. (burada birlestirip isim ve soyisim yaziyor.)
    // printf("%s\n\n", adim);

    strcpy(soyadim, adim);
    // ikinci stringi birinci stringe kopyaliyor yani soyadim yazdirdiginda adim yazacak
    printf("%s\n\n", soyadim);

    if (strcmp(adim, soyadim) == 0) {
        printf("Bu iki string esittir.\n");
        // strcmp iki stringi karsilatiriyor.
        // bu ikisini strcpy esitledigimiz icin 0 degeri doncek ve if blogu caliscak.
    } else {
        printf("bu iki string esit degildir.");
    }
    return 0;
}