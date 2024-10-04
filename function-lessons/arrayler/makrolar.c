#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX(numberOne, numberTwo) (numberOne > numberTwo) ? numberOne : numberTwo
#define MIN(numberOne, numberTwo) (numberOne < numberTwo) ? numberOne : numberTwo
#define AREA(x, y) ( (x) * (y))
#define NUMBER 5

int main() {

    printf("MAX(151,155):%d\n", MAX(151, 155));
    printf("Min(151,155):%d\n", MIN(151, 155));
    printf("Area of rectangle(4,5):%d\n", AREA(4, 5));

    printf("%d", NUMBER);
    #undef NUMBER

    //? calismiyor

    return 0;
}