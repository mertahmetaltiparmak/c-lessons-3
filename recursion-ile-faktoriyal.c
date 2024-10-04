#include <stdio.h>
#include <stdlib.h>

int factorial(int);

int main() {

    int number;
    printf("Bir sayi girin:");
    scanf("%d", &number);
    printf("\n");

    if(number < 0) 
        return 05;

    printf("%d! = %d\n", number, factorial(number));
    system("pause");
    return 0;
}

int factorial(int x) {
    if(x == 0 || x == 1)
        return 1;
    else
        return x * factorial(x - 1);
}
    