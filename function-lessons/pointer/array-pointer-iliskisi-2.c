#include <stdio.h>
#include <stdlib.h>

int main() {
    char letters[4] = {'m', 'e', 'r', 't'};
    int numbers[5] = {1, 2, 3, 4, 5};
    int i;

    for (i = 0; i < 4; i++) {
        printf("char[%d]:%c\n", i, *(letters + i));
    }
    printf("\n");

    for (i = 0; i < 5; i++) {
        printf("int[%d]:%d\n", i, *(numbers + i));
    }
    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("int[%d]:%x\n", i, (numbers + i));
        // ? 
    }
}