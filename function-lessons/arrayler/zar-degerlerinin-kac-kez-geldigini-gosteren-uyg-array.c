#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, zar, kacTane[7] = {0, 0, 0, 0, 0, 0, 0};

    srand(time(NULL));
    for(i = 1; i <= 10; i++) {
        zar = rand() % 6 + 1;
        kacTane[zar]++;
    }
    printf("Zar numarisi \t kac kez geldi\n");
    for(i = 1; i < 7; i++) {
        printf("%d \t\t %d \n", i, kacTane[i]);
    }
    printf("\n");
    
    system("pause");
    return 0;
}