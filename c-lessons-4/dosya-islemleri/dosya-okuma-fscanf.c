#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fptr;
    fptr = fopen("data.txt", "r");

    char data[100];
    int number;

    if (fptr == NULL) {
        printf("GG");
    } else {
        fscanf(fptr, "%s %d", data, &number);
        // fscanf kullanirken ilk parametre pointermizdir. ikinci parametre format specifers ve adresimiz yani aldigimiz format specifer
        // string degilse & isareti koyulur. yukaradaki ornek
        // bosluktan sonra calismiyor butun cumleyi okumak icin farkli arrayler olusturabilirsin.
        printf("%s %d\n", data, number);
    }
    fclose(fptr);
    // fseek konum gostergecini istedigimiz miktar ileri veya geriye goturebilir funtion basarili olursa geriye 0 degeri doner 
    // SEEK_SET dosyanin basi SEEK_CUR oldugu konum SEEK_END sonuna goturur.
    // ftell konum gostergicini byte olarak o anda nerede oldugunu gosterir.
    // rewind dosya konum gostergicini dosyanin en basina geri getiyor. yani sifirliyor resetliyor.

    system("pause");
    return 0;
}