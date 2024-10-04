#include <stdio.h>
#include <stdlib.h>

int main() {
    char* mesajBir = "Bu bir mesajdir";
    char  mesajIki[] = {"Sanirim"};
    // adresi alip yaziyor gibi
    puts(mesajBir);
    puts(mesajIki);
    // gets function'i klavyeden girilen karakterin arrayden uzun olup olmadigini kontrol edemiyor.
    // ornek: eger girersen segmation error alirsin ve yapma bunu!
    char ornek[100] ;
    puts("bir cumle girin");
    gets(ornek);
    // gets ile kolay sekilde cumle alabilirsin.

    puts("girdiginiz cumle");
    puts(ornek);

    return 0;
}