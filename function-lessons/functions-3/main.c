#include <stdio.h>
#include <stdlib.h>

int sumNumbers(int x, int y) {
    return x + y;
}
int main()
{
    int result = sumNumbers(1, 6) * 5;
        printf("Result is %d\n", result);
    return 0;
}
