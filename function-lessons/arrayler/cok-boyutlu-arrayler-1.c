#include <stdio.h>
#include <stdlib.h>

int main() {

    // int numbers[2]/*satir*/ [3]/*sutun*/ ={ {1, 2, 3} , {4, 5, 6} };

    // numbers[0] [1] = 55;  //ctrl k + ctrl c secili olanlari comment line'a ekler
    // printf("%d\n", numbers[0][0]); //0.satirdan baslar ayni dizilerde 0 dan baslamasi gibi
    // printf("%d\n", numbers[0][1]);
    // printf("%d\n", numbers[0][2]);
    // printf("%d\n", numbers[1][0]);
    // printf("%d\n", numbers[1][1]); 
    
    int multiDimentialArray[3] [3] = {{1, 3, 5} , {2, 4, 6} ,{10, 20, 30}}; 
    int i, j;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++){
            printf("%5d", multiDimentialArray[i][j]); //kendim yazdim ez
        }
        printf("\n");
    }
    return 0;
}