#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
   /* char strings[] = {'m', 'e', 'r', 't'};
    int size = sizeof(strings); 
    // %lu nedir unsigned nedir onu ogren (negatif olamazmis)
    printf("%lu", size);
    */
    char string[] = "Mert Ahmet";
    char stringTwo[] = {'M', 'e', 'r', 't', ' ', 'A', 'h', 'm', 'e', 't', '\0'};
    int size = sizeof(string);
    
    printf("%d\n", size);
    printf("%d", sizeof(stringTwo));

    for (int i = 0; i < size; i++) {
        printf("\t%c\n", string[i]);
        // icine *(string + i) yazarak ayni sonucu elde edebiliriz.
    }

}