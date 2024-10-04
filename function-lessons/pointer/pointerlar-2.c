#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 5;
    int* pointer = &x;
    char f = 'u';
    char* k = &f; 
    //degerini x'in adresine esitledik
    //pointer'in turu yoktur. eger x'imizin turu float olsaydi pointer'ida float yapardik
    printf("x'in degeri:%d\n", x);
    printf("x'in adresi:%x\n", pointer);
    // x'in adresini pointera atadigimiz icin bu ustteki kodla adresi yazabiliriz.
    printf("\nx'in adresi:%x\n", &x);

    printf("pointer'in adresi:%x\n", &pointer);
    printf("Pointer'in icinde tuttugu adresdeki deger(x):%d\n\n", *pointer);
    // * ile de pointer adreste tuttugu degeri yazabiliriz.
    printf("f'in icindeki harf:%c\n", f);
    printf("f'in adresi:%x\n\n", &f);
    printf("f'in adresi(pointer ile yazilan):%x\n", k);
    printf("char turunden pointerin adresi:%x\n", &k);
    printf("pointerin tuttugu deger:%c\n", *k);
    // k degerindeki adresdeki degeri cekip  yaziyor yine * ile cekiliyor bu deger
    return 0;
}