#include <stdio.h>
#include <stdlib.h>

int main() {
    char stringDevam[] = "Agaaaa";
    int size, i = 0;
    size = sizeof(stringDevam);
    while (*(stringDevam + i) != '\0') {
        printf("%c", *(stringDevam + i));
        i++;
    }
    return 0;
}