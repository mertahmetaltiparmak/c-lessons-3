#include <stdio.h>
#include <stdlib.h>

enum  months{
    JANUARY = 1,
    FEBUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};
int main() {
    enum months myConst;
    myConst = JUNE;    

    if (myConst == 6 || myConst == 7 || myConst ==8) {
        printf("Yaz'a hos geldiniz.");
    } else {
        printf("Yine okul var aww");
    }
    return 0;
}