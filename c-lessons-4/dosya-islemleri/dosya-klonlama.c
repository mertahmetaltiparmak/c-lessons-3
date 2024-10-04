#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr, *fptrcopy;
    fptr = fopen("data.txt", "r");
    fptrcopy = fopen("datacopy.txt", "w");

    if (fptr == NULL) {
        printf("Failure.");
    } else {
        if (fptrcopy == NULL) {
            printf("Failure.2");
        } else {
            while (!feof(fptr)) {
                // eof en of file gelene kadar kopyalar.
                putc(getc(fptr), fptrcopy);
            }
            printf("The file has been copied.\n");
        }
    }
    fclose(fptr);
    fclose(fptrcopy);
    // kopyalanan dosyanin sonunda garip bir isaret oluyor sor!!


    return 0;
}