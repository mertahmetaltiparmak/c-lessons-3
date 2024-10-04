#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int i, number = 0;
    srand(time(NULL));
    for(i = 1; i <= 5; i++) {
        // 1 - 100 arasi sayilar eger +1 eklemeseydik 0 - 99 arasi olurdu
        number = rand() % 100 + 1;
        printf("%d. rastgele sayi:%d\n", i, number);
    }
    system("pause");
    return 0;
}