#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    fptr = fopen("C:\\Users\\Mertt\\Desktop\\code\\attempts6\\dosya-islemleri\\data.txt" ,"a");
    fclose(fptr);

    return 0;
}