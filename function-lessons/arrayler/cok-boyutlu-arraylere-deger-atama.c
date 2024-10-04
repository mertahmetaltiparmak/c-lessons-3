#include <stdio.h>
#include <stdlib.h>

int main() {

    int satir, sutun, i, j;

    printf("Satir sayisini girin:");
    scanf("%d", &satir);
    printf("\n");
    
    printf("Sutun sayisini girin:");
    scanf("%d", &sutun);
    printf("\n");

    int matrix[satir][sutun];

    for(i = 0; i < satir; i++) {
        for(j = 0; j < sutun; j++) {
            printf("\nmatrix[%d][%d]:", i, j);
            scanf("%d", &matrix[i][j]);
        }   
    }
    printf("\nDizin:\n");
    for(i = 0; i < satir; i++) {
        for(j = 0; j < sutun; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}