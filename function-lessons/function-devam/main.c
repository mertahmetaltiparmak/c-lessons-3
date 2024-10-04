#include <stdio.h>
#include <stdlib.h>

void allNumbers(int numbers[5]){
    for(int i = 0; i < 5; i++){
        printf("%d\n", numbers[i]);
    }
}
int main()
{
    int numbers[5] = {5, 10, 15, 20, 25};
        allNumbers(numbers);
    return 0;
}
