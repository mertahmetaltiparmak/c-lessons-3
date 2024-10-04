#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum, i, j;
    int matrix [4][4] = {{4, 1, 2, 6}, {5, 9, 7, 8}, {11, 33, 55, 10},{13, 14, 12, 5}};

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n\n");
    }
    printf("\n");
    for(i = 0; i < 4; i++) {
        printf("%d. satir toplami:", i + 1);
        for(j = 0; j < 4; j++) {
            sum += matrix[i][j];
        }
        printf("%d \n", sum);
        sum = 0;
    }
    printf("\n");
     for(i = 0; i < 4; i++) {
        printf("%d. sutun toplami:", i + 1);
        for(j = 0; j < 4; j++) {
            sum += matrix[j][i];
        }
        printf("%d \n", sum);
        sum = 0;
    }
    return 0;
}