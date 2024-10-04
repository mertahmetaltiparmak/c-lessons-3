#include <stdio.h>
#include <stdlib.h>

int main() {

    double average = 0, numbers[3];

    printf("\t\t\t\t\tAritmetik Ortalama Hesaplayici (Dort Sayi İle)\n");

    printf("Sayilari girin:");
    scanf("%lf%lf%lf%lf", &numbers[0], &numbers[1], &numbers[2], &numbers[3]);

    average = (numbers[0] + numbers[1] + numbers[2] + numbers[3]) / 4;
    printf("Sonuc:%.2lf", average);

    return 0;
}