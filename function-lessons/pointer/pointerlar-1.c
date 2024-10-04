#include <stdio.h>
#include <stdlib.h>

int main() {

    int number = 5;
    float y = 3.14;
    long double z = 6.1;

    printf("sayim:%d\n", number);
    // sayinin adresini yazmak icin asagidakini yapiyoruz %p kullanirsak basindaki sifirlarda gelir (gerek yok kullanmaya)
    // &x = 264EA14; seklinda bellekteki adresini biz atayamiyoruz bilgisayar otomatik bos olan bellege atiyor.
    printf("sayimin adresi:%x\n", &number);

    printf("Sayimin kapladigi byte:%d\n", sizeof(number));
    printf("float:%f\n", y);
    printf("adresi:%x\n", &y);
    printf("kapladigi byte:%f\n", sizeof(float));

    printf("long double:%lf\n", z);
    printf("adresi%x\n", &z);
    printf("kapladigi byte:%lf\n", sizeof(long double));

    return 0;
}