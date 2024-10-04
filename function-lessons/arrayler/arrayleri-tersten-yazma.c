#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, numbers[5];

    printf("Enter a array number:");
    for(i = 0; i < 6; i++) {
        scanf("%d", &numbers[i]);
    }
    printf("Orginal Order:");
    for(i = 0; i < 6; i++){
        printf("%d ", numbers[i]);
    }
    printf("\nReverse order:");
    for(i = 5; i >= 0; i--){
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}