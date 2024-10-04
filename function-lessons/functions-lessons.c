#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {

    char myChar;

    printf("Bir tusa basiniz:");
    myChar = getc(); 
    // getc kullanirsan bastigin tusu aninda algilar 
    // getchar kullanirsan bastiktan sonra enter ile tusu onaylaman gerekir 
    printf("\n%c tusuna bastiniz\n", myChar);
    printf("girdiginiz tusun ASCII degeri:%d", myChar);

    return 0;
}