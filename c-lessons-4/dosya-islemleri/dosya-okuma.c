#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fptr;
    char myLetter;
    fptr = fopen("C:\\Users\\Mertt\\Desktop\\code\\attempts6\\dosya-islemleri\\data.txt", "r");

    if (fptr == NULL) {
        printf("Nope.\n");
    } else {
        do {
            myLetter = getc(fptr);
            printf("%c", myLetter);
        } while (myLetter != EOF);
        // !feof(fptr) ile de yapibiliriz. feof bizim bu islemi yapmamiz icin olusturulmus.
        printf("\n\nOkuma bitti.\n");
    }   
    fclose(fptr);

    system("pause");
    return 0;
}