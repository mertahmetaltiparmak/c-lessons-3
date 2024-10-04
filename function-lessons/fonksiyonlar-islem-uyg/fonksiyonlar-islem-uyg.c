#include <stdio.h>
#include <stdlib.h>
#include "myMath.h"

int main()
{
    int option = 0, x, y;

    menu();
    printf("Yapacaginiz islemi secin:");
    scanf("%d", &option);
    printf("\n");

    switch(option){
        case 1:
            printf("birinci sayiyi girin:");
            scanf("%d", &x);
            printf("\n");
            printf("ikinci sayiyi girin:");
            scanf("%d", &y);
            printf("\n");

            printf("Min:%d\n",min(x, y));
            break;
        case 2:
            printf("birinci sayiyi girin:");
            scanf("%d", &x);
            printf("\n");
            printf("ikinci sayiyi girin:");
            scanf("%d", &y);
            printf("\n");

            printf("Max:%d\n",max(x, y));
            break;
        case 3:
            printf("karesini almak istediginiz sayiyi girin:");
            scanf("%d", &x);
            printf("\n");

            printf("%d sayisinin karesi:%d\n", x, kare(x));
            break;
        case 4:
            printf("kupunu almak istediginiz sayiyi girin:");
            scanf("%d", &x);
            printf("\n");

            printf("%d sayisinin kupu:%d\n", x, kup(x));
            break;
        case 5:
            printf("mutlak degerini almak istediginiz sayiyi girin:");
            scanf("%d", &x);
            printf("\n");

            printf("%d sayisinin mutlak degeri:%d\n", x, mutlak(x));
            break;
        default:
            printf("1 - 5 arasinda bir sayi girin.\n");
        case 0:
            break;
    }
    return 0;
}
void menu() {
    printf("\n");
    printf("************\n");
    printf("*   MENU   *\n");
    printf("************\n\n");
    printf("1 - Minimum\n");
    printf("2 - Maksimum\n");
    printf("3 - Kare al\n");
    printf("4 - Kup al\n");
    printf("5 - Mutlak Deger\n");
    printf("0 - Cikis\n\n");
}
int min(x, y) {
    if(x < y){
        return x;
    }else{
        return y;
    }
}
int max(x, y) {
    if(x > y){
        return x;
    }else{
        return y;
    }
}
int kare(x){
    return x * x;
}
int kup(x){
    return x * x * x;
}
int mutlak(x){
    if(x < 0){
        return x * -1;
    }else{
        return x;
    }
}


