#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main() {

    int r;
    float result;

    printf("\nEnter a radius:");
    scanf("%d", &r);
    printf("\n");

    result = PI * r * r;

    printf("Area:%.2f\n", result);

    system("pause");
    return 0;
}