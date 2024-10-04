#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* name;
    int age;
    float weight;
}infos;
// typedef struct basina yazarak int main icinde struct yazmaktan kurtulabiliriz. isimiz kisalir.
int main() {
    infos x1 = { "Mert", 18, 80.5 };
    infos x2 = {"Yemir", 17, 78.7};

    printf("Ad:%s\n", x1.name);
    printf("Yas:%d\n", x1.age);
    printf("Kilo:%.2f\n\n", x1.weight);

    printf("Ad:%s\n", x2.name);
    printf("Yas:%d\n", x2.age);
    printf("Kilo:%.2f\n", x2.weight);

    return 0;
}

