#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE* fptr;
    fptr = fopen("mert.txt", "a");
    // w modunda yani write modunda acarsak eski dosyayi silip yeni dosya olusturur yani eski yazdiklarin kalmaz.
    // a modunda acarsak yani append (ekleme) islemiyle uzerine yazabiliriz dosyayi

    if (fptr == NULL) {
        printf("Failure.");
    } else {
        fputc('M', fptr);
        // fputc ile de ayni islemi yapabiliriz.
        putc('\n', fptr);
        // putchar dan geliyor tek harf alabilir ayni char functioni gibi
        // variable ile de calisabilir 'e' yerine olusturdugumuz varible yazarsak olur.
        putc('E', fptr);
        putc('\n', fptr);
        putc('R', fptr);
        putc('\n', fptr);
        putc('x', fptr);

        printf("File open/wrie succesful.\n\n");
    }
    fclose(fptr);

    system("pause");
    return 0;
}