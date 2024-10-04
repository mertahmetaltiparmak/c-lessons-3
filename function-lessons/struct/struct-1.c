#include <stdio.h>
#include <stdlib.h>

struct studentInfo {
    int no;
    char letter;
    char* name;
    float score;
    char* surname;
    char ikinciadim[30];
};

int main() {

    struct studentInfo x = { 1150, 'X', "Mert", 95.4, "Altiparmak", "Ahmet"};
    // bunlari yazarken siralamayi takip etmek zorundayiz.(yukardaki) 

    /* x.no = 1150;
    x.letter = 'X';
    x.name = "Mert";
    x.surname = "Altiparmak";
    x.score = 95.5;
    strcpy(x.ikinciadim,"Ahmet"); bunu boylede kullanabiliriz veya ustteki gibide kullanabiliriz. */ 

    printf("Harfim:%c\n", x.letter);
    printf("Adim:%s\n", x.name);
    printf("Ikinci adim:%s\n", x.ikinciadim);
    printf("Soy adim:%s\n", x.surname);
    printf("Okul numaram:%d\n", x.no);
    printf("Notum:%.2f\n", x.score);

    return 0;
}