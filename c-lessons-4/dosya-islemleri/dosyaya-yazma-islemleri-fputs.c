#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fptr;
    fptr = fopen("C:\\Users\\Mertt\\Desktop\\code\\attempts6\\dosya-islemleri\\sa.txt" ,"w");

    if (fptr == NULL) {
        printf("Basaramadik.\n");
    } else {
        printf("islem basarili!");
        fputs("Sa turk varmi ? \n", fptr);
        // fput string acilimi cumle girmemizi saglar.
        fputs("yoook\n", fptr);
    }
    fclose(fptr);

    system("pause");
    return 0;
}