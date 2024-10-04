#include <stdio.h>
#include <stdlib.h>

double kare(double *ptr);

int main() {

    double number, result;

    printf("Karesini almak istediginiz sayi yazin:");
    scanf("%lf", &number);

    result = kare(&number);

    printf("\nSayinin karesi:%.2f\n\n", result);

    return 0;
}
double kare(double *ptr) {
    return *ptr * *ptr;
}