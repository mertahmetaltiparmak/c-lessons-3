#include <stdio.h>
#include <stdlib.h>

int main() {
    char name [6] = {'a', 'b', 'c', 'd', 'e', 'f'};
    // bir arrayin ilk elemanin adresi o arrayin ismidir.
    // printf("ilk elemanin adresi:%x\n", &name[0]);
    // printf("Array'in ismi:%x\n", *name); 
    // eger name + 1 yapar ve name[1] yaparsam bu seferde ikinci elemanima ulasirim.
    // eger name'in basina * koyarsak name'deki degere
    for (int i = 0; i < 6; i++) {
        printf("%d. elemanin adresi:%x\n", i, &name[i]);
    }

    system("pause");
    return 0;
}