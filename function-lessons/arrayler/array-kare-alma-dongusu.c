#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, option, square[20];

    for(i = 0; i <= 20; i++){
        square[i] = i * i;
        printf("%d karesi %d\n", i, square[i]);
    }
// tanri bu kodu bagislasin cunku ben bagislamicam.
 
 /*   for(i = option; i <= option; i--) { // < sadece bu ile calisir mi??
        square[i] = i * i;
        printf("%d karesi %d\n", i, square[option]);
    }*/
 
 /*  while(1){

    square[option] = option * option;

    printf("karesi %d\n", square[option]);

    option--;
    if(option == 0){
        break;
    }
}
    return 0;
} //normal int mainin bitisi 
*/
}