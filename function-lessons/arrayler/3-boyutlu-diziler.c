#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, j, k;
    int matrix[3][2][5] ={ {{9, 2}, {15, 11, 23, 11, 4}}, {{1, 2, 6, 5, 7}, {111,123,124,125} }, {{51, 52, 53}, {90, 91, 92, 93, 94}}};

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 5; k++) {
                printf("%4d", matrix[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    }

    system("pause");
    return 0;
}