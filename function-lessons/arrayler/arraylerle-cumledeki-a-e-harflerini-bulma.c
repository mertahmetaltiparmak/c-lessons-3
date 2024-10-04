#include <stdio.h>
#include <stdlib.h>

void countCharacter(char x[]);

int main() {

    char x[100];
    int i= 0;

    printf("Bir cumle girin(sonuna nokta koyup bitirin):");
    do{
        scanf("%c", &x[i]),
        i++;
    }while(x[i - 1] != '.');
    countCharacter(x);
    return 0;
}
void countCharacter(char x[]) {
    int i, aCount = 0, eCount = 0;
    for(i = 0; x[i] != '.'; i++){
        if(x[i] == 'A' || x[i] == 'a')
            aCount++;
        if(x[i] == 'E' || x[i] == 'e')
            eCount++;
    }
    printf("\nA/a:%d\n", aCount);
    printf("E/e:%d\n", eCount);    
}