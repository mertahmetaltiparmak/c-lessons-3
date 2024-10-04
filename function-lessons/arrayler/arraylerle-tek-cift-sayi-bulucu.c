#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, unit, numbers[100];

    printf("Kac sayi gireceksiniz(pozitif bir deger girin):");
    scanf("%d", &unit);

    printf("\nDizi numarasi girin:");
    for(i = 0; i < unit; i++) {
        scanf("%d", &numbers[i]);
    }
    printf("Tek sayilar:");
    for(i = 0; i < unit; i++){
        if(numbers[i] % 2 == 1)
            printf("%d ", numbers[i]);
    }
    printf("\n");
    printf("Cift sayilar:");
    for(i = 0; i < unit; i++) {
        if(numbers[i] % 2 == 0)
            printf("%d ", numbers[i]);
    }
    printf("\n");
}