#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fptr;
    fptr = fopen("data.txt", "r");
    // a kullanip append ile data.txt'mizin sonuna bir cumle daha eklebilirdik.
    // fputs("\nyeni cumle", fptr); ile eklerdik
    char data[100];

    if (fptr == NULL) {
        printf("Nope.\n");
    } else {
        while (fgets(data, 100, fptr)) {
            // birinci veri nereyi okuyacagi ikinci kac satir okuyacagi ucuncu ise pointerimiz
            // eger while kullanmassak asagi satira gecmez ve tek satirdeki cumleleri okur.
            printf("%s", data);
        }
    }
    fclose(fptr);

    return 0;
}