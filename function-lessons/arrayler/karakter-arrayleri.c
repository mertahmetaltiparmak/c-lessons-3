#include <stdio.h>
#include <stdlib.h>

int main(){

    char karakter[30];

    printf("Adinizi girin:");
    gets(karakter); 
    // gets ile hem bosluk koyabilir hemde daha fazla kelime yazabilirsin eger scanf olsaydi bosluk koyamaz birlesik yazmak zorunda kalirdin
    printf("\nAdiniz:%s\n", karakter);
    
    return 0;
}