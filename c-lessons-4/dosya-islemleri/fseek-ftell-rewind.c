#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fptr;
    fptr = fopen("data.txt", "r");

    char message[100];

    if (fptr == NULL) {
        printf("Invalid value");
    } else {
        printf("Konum gostergecinin yeri:%d\n", ftell(fptr));
        // konum gostergecinin baslangictaki yeri 0'dir.
        fseek(fptr, 30, SEEK_SET);
        printf("Konum gostergecinin yeri:%d\n", ftell(fptr));
        fseek(fptr, -20, SEEK_CUR);
        // cur ile - 20 de yapiliyoruz set'de olmuyor.
        printf("Konum gostergecinin yeri:%d\n", ftell(fptr));
        fgets(message, 40, fptr);
        printf("%s\n", message);
        printf("Konum gostergecinin yeri:%d\n", ftell(fptr));
        rewind(fptr);
        printf("Konum gostergecinin yeri:%d\n", ftell(fptr));
    }
    // fseek konum gostergecini istedigimiz miktar ileri veya geriye goturebilir funtion basarili olursa geriye 0 degeri doner 
    // SEEK_SET dosyanin basi SEEK_CUR oldugu konum SEEK_END sonuna goturur.
    // ftell konum gostergicini byte olarak o anda nerede oldugunu gosterir.
    // rewind dosya konum gostergicini dosyanin en basina geri getiyor. yani sifirliyor resetliyor.
    fclose(fptr);

    return 0;
}