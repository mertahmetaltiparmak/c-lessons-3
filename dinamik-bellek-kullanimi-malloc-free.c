#include <stdio.h>

int main() {
    // dinamik bellek olusturma boyle c'de
    int* x = (int*) malloc(sizeof(int));

    *x = 70;
    printf("%d\n", *x);
    free(x); // c++'daki delete komutunun yerine gecer.

    return 0;
}