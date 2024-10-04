#include <stdio.h>
#include <stdlib.h>
#define NUMBER 15

int main() {

    #if NUMBER > 10
    printf("NUMBER is larger than 10");
    // #elif (else if)
    #else 
    printf("Number is smaller than 10");
    #endif

    //ifdef tanimli ise 
    //ifndef if no define tanimli degil ise

    return 0;
}