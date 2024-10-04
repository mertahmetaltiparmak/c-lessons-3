#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {

    int number;

    printf("Bir sayi girin (0-255):");
    scanf("%d", &number);
    printf("\n");

    printf("girdiginiz karakter:%c\n", number); 
    // A - Z -- a - z 0 - 9 karakterleri girdiginde true dondurur eger ozel karakterler gelirse else blogunu calistirir.
    // sayi olarak girceksin yani ASCII degerini giriyorsun
    if(isalnum(number)){
    // isalpha ise sadece buyuk ve kucuk harflari kabul ediyor yine ayni ASCII degeri olarak
    // isdigit ise sadece sayi
    // islower sadece kucuk harfler icin
    // isupper sadece buyuk harfler icin
    // isspace sadece whitespaceler icin
    //toupper('harf'); kucuk harfi buyuk harfe cevirir. 
        printf("dogru deger girdiniz.\n");
    }else{
        printf("yanlis deger girdiniz\n");
    }
    return 0;
}