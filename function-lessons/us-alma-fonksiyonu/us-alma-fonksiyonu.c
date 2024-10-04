#include <stdio.h>
#include <stdlib.h>

float exponention(float x, int y);

int main()
{
    float base = 0, result = 0;
    int exponent = 0;

    printf("sayinin tabanini girin:");
    scanf("%f", &base);
    printf("\nsayinin ussunu girin:");
    scanf("%d", &exponent);

    result = exponention(base, exponent);
    printf("Sonuc:%.2f\n", result);

    return 0;
}
float exponention(float x, int y){
    float result = 1;
    int i;
    if(y < 0) {
        for(i = 0; i <- y; i++) { //bunu kendim yazdigimda - unutmusun neden calismadi - ne ise yariyor
            result *= 1 / x;
        }
    }else{
        for(i = 0; i < y; i++) {
            result *= x;
        }
    }
    return result;
}
