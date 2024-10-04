#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void dizi(int*, int);

int main() {

int numbers[5] = {2, 3, 5, 7, 11}; 
int size;
size = sizeof(numbers) / sizeof(numbers[0]);

for (int i = 0; i < size; i++) {
    printf("sayi[%d]:%d\n", i, numbers[i]);
}
dizi(numbers, size);
printf("\nislemden sonra\n\n");
for (int i = 0; i < size; i++) {
    printf("sayi[%d]:%d\n", i, numbers[i]);
}
system("pause");
return 0;
}
void dizi(int* numbers, int size) {
    for (int j = 0; j < size; j++) {
        *(numbers + j) *= 5;
    }
}
