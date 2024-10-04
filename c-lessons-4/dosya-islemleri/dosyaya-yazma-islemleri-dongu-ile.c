#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fptr;

    fptr = fopen("dongu.txt", "w");

    char name;

    if (fptr == NULL) {
        printf("Failure");
    } else {
        printf("Process Succesful.\n");
        for (name = 'a'; name <= 'z'; name++) {
            putc(name, fptr);
            putc('\n', fptr);
        }
    }
    fclose(fptr);

    system("pause");
    return 0;
}