#include <stdio.h>
#include <stdlib.h>

int main() {
    int x[50][50], y[50][50], result[50][50];
    int i, j, k, sum;
    int xrows, xcolumns, yrows, ycolumns;

    printf("1. matrisin satir ve sutun sayisini gir:");
    scanf("%d%d", &xrows, &xcolumns);
    for (i = 0; i < xrows; i++) {
        for (j = 0; j < xcolumns; j++) {
        printf("\n1.[%d][%d]:", i, j);
        scanf("%d", &x[i] [j]);
        }
    }
    printf("2. matrisin satir ve sutun sayisini gir:");
    scanf("%d%d", &yrows, &ycolumns);

    if (yrows != xcolumns) {
        printf("bu matriksler carpilamaz.");
    } else {
        printf("y matriksini degerlerini girin:");
    
    for (i = 0; i < yrows; i++) {
        for (j = 0; j < ycolumns; j++) {
            printf("\n2.[%d][%d]:", i, j);
            scanf("%d", &y[i] [j]);
        }
    }
    }
    for (i = 0; i < xrows; i++) {
        for (j = 0; j < ycolumns; j++) {
            for (k = 0; k < yrows; k++) {
                sum += x[i] [k] * y[k] [j];
            }
            result[i] [j] = sum;
            sum = 0;
        }
    }
    printf("\nSonuc:\n");
    for (i = 0; i < xrows; i++) {
        for (j = 0; j < ycolumns; j++) {
            printf("%5d", result[i][j]);
        }
        printf("\n\n");
    }
    printf("\n");

    system("pause");
    return 0;
}