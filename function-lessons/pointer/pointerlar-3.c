#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 15;
    int* ptr;
    ptr = &x;
    double number = 3.1561;
    double* a = &number;
    double* b = &number;

    printf("x'in degeri:%d\n", x);
    *ptr = 5;
    printf("x'in yeni degeri:%d\n\n", x);

    printf("sayi:%lf\n", number);
    printf("sayi:%lf\n\n", *a);
    *b = 5.32006;
    //hepsi sonuc olarak numberdaki degeri degistirdigi icin b'yi degistirip number'i veya a'yi yazsak bile ayni b'deki degistirdigimiz degeri yazacaktir.s
    printf("sayi:%lf\n", *a);

    return 0;
}