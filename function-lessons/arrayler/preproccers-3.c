#include <stdio.h>
#include <stdlib.h>
#define number 5

int main() {

    #ifdef number
        printf("Sayi tanimlidir ve degeri:%d\n\n" ,number);
    #else
        printf("Sayi tanimsizdir.\n\n");
    #endif
    
    #undef number

    #ifdef number
        printf("Sayi tanimlidir ve degeri:%d\n\n" ,number);
    #else
        printf("Sayi tanimsizdir.\n\n");
    #endif

    #ifndef number
        #define number 50    
    #endif
    printf("Sayi tanimldir ve degeri:%d\n\n", number);

    return 0;
}