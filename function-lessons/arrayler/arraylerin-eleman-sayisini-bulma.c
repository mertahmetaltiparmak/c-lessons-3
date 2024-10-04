#include <stdio.h>
#include <stdlib.h>

int main() {
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8 ,9, 0};
    
    printf("%d", sizeof(numbers) / sizeof(numbers[0]));
    // bir arrayrin kapladigi alani tamamina bolersek eleman sayisini
    return 0;
}