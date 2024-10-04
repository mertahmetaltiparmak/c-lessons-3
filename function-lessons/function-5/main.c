#include <stdio.h>
#include <stdlib.h>

int sumNumbers(int i);

int main()
{
    int x;
        printf("Sayi girin:");
        scanf("%d", &x);
        printf("\n");
    int result = sumNumbers(x);
        printf("Sonuc:%d\n", result);
    return 0;
}
int sumNumbers(int i){
    if(i > 0){
        return i + sumNumbers (i - 1); // + yerine * yazip faktoriyal bulamiyorum cunku sumnumbers 0  degerinide aliyor ?? (sumnumber 0 cagirmamasi lazim)
    }else{
        return 0;
    }

}
