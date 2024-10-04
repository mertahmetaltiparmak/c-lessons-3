#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fptr;
    fptr = fopen("veri-al.txt", "w");

    char name[40];

    if (fptr == NULL) {
        printf("Write process unsuccesfull.\n");
    } else {
        printf("isminizi girin:");
        gets(name);

        fprintf(fptr, "Adiniz:%s", name);
        // fprintf ile de dosyamiza yazdirabiliriz ve pointer parametresini once belirtiyoruz fputs'un aksine
        // fprintf ile birden fazla parametrede alabiliriz.
        printf("\nisleminiz yapildi.\n");
    }
    fclose(fptr);

    system("pause");
    return 0;
}