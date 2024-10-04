#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void harfKaydirma(char*, int);

int main() {
    char karakter[4] = {'M', 'e', 'r', 't'};
    int size = sizeof(karakter) / sizeof(karakter[0]);
    
    harfKaydirma(karakter, size);

    system("pause");    
    return 0;
}
void harfKaydirma(char* karakter, int size) {
    int j = 0, i = 0;
    for (i = 0; i < size + 1; i++) {
        for (j = i; j < size; j++) {
            printf("%c", *(karakter + j));
        }
        for (j = 0; j < i; j++) {
            printf("%c", *(karakter + j));
        }
        printf("\n");
    }
}