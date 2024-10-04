#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float* karekok(float* ptr);

int main() {
    float number;
    float* ptr;

    printf("Bir sayi girin:");
    scanf("%f", &number);

    ptr = karekok(&number);

    printf("\nSayinin karekoku:%.2f\n\n", *ptr);

    system("pause");
    return 0;
}
float* karekok(float* ptr) {
    *ptr = sqrt(*ptr);
    return ptr;
}
