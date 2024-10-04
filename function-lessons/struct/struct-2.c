#include <stdio.h>
#include <stdlib.h>

struct infos {
    int favoriSayi;
    char hayvan[30];
    float sayi;
    char adim[40];
};

int main() {

    struct infos x = {5, "kedi", 5.5, "Mert"};
    struct infos x2;

    //x.sayi = 5.6; // veri degistirmede calismiyor // strcpy(x.hayvan, ahmet) boylede arrayler degistiriliyor.
    x2 = x;
    // structlari boyle kopyaliyoruz.

    printf("adim:%s\n", x.adim);
    printf("Favori sayim:%d\n", x.favoriSayi);
    printf("En sevdigim hayvan:%s\n", x.hayvan);
    printf("dogum tarihimsi:%f\n", x.sayi);
    
    printf("\n----------------------\n\n");
   
    printf("adim:%s\n", (char*) (x2.adim));
    printf("Favori sayim:%d\n", x2.favoriSayi);
    printf("En sevdigim hayvan:%s\n", x2.hayvan);
    printf("dogum tarihimsi:%f\n", x2.sayi);
   
    return 0;
}