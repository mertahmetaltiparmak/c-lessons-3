#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    int* ptr = &x;
    char character = 'c';
    char* ptr2 = &character;
    double ondalikliSayi = 15.5;
    double* ptr3 = &ondalikliSayi;

    printf("Pointer'in adresi:%x\n", ptr);
    ptr++;
    // burada int turunden veri kullandigimiz icin ve int veri turunun alani 4 byte oldugu icin adresin degeri dort artti.
    // eger ptr += 3; deseydik 4 . 3 12 byte artardi
    printf("Pointer'in adresi:%x\n", ptr);
    printf("x'in adresi:%x\n\n", &x);
    // sadece pointerin adresini degistirdigimiz icin x variablemiz hala ayni adrestedir.
    // bu artislar hexadecimal (on altilik) sisteme gore gerceklesir yani 9 dan sonra a degeri gelir ve 16. degere yani f geldiginde basa doner
    printf("Char turunden pointer'in adresi:%x\n", ptr2);
    ptr2 += 4;
    printf("Char turunden pointerin yeni adresi:%x\n", ptr2);
    printf("Char turunden karakterin adresi:%x\n\n", &character);

    printf("Double turunden pointer'in adresi:%x\n", ptr3);
    // double veri turu 8 byte alan kaplar.
    ptr3++;
    printf("Double turunden pointer'in yeni adresi:%x\n", ptr3);
    printf("Double turunden variable'in adresi:%x\n", &ondalikliSayi);

}