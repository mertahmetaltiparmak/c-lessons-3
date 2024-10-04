#include <stdio.h>
#include <stdlib.h>
 
int kelime(char*);

int main() {
    char mesaj[100];

    printf("Bir cumle girin:");
    gets(mesaj);
    printf("%d kadar kelime girdiniz.", kelime(mesaj));

    return 0;
}
int  kelime(char* ptr) {
    int i = 0, word = 0;
    while (ptr[i] != '\0') {
        // ptr[i] ifte yazamadim aklima gelmedi
        if (ptr[i] == ' ') {
            word++;
        }
        i++;
    }
    return word + 1;
}