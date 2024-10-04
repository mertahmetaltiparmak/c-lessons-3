#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, i , j;

    printf("Enter a size of the square matrix(x < 10):");
    scanf("%d", &size);
    printf("\n");

    // size size'lik bir kare olusturup onun icini 0 ile doldurur bu kod
    int matrix[size] [size];
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) { 
            matrix[i] [j] = 0;
        }
    }
    for(i = 0; i < size; i++) {
        matrix[i] [i] = 1; 
        // majorlari doldurur.(sol capraz birleri)
        matrix[i] [size - i - 1] = 1;
        // minorlari doldurur.(sag capraz birleri) (0 2 1 1 2 0 diye azaldigi icin size - i - 1 yaptik) (-1 dememizin nedeni arraylerin 0. indexden baslamasi)
    }
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("%4d", matrix[i] [j]);
        }
        printf("\n\n");   
    }
    return 0;
}