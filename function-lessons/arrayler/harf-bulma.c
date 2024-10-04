#include <stdio.h>
#include <stdlib.h>

void count(char x[], int y[]);
// ingiliz alfabesi 26 harften olusur.
int main() {

    char x[100];
    int y[26], i = 0;

    printf("Enter a sentence:");
    do {
        scanf("%c", &x[i]);
        i++;
    }while(x[i - 1] != '.'); 
        count(x, y);
        for(i = 0; i < 26; i++) {
            printf("\n%c/%c:  %d\n", 'A'+i, 'a'+i, y[i]);
        }
    return 0;  
}

void count(char x[], int y[]) {
    int i, j;
    for(i = 0; i < 26; i++) {
        y[i] = 0;
    }
    for(i = 0; x[i] != '.'; i++) {
        if(x[i] >= 'A' && x[i] <= 'Z')
            y[(int) x[i] - (int)'A']++;
        if(x[i] >= 'a' && x[i] <= 'z')
            y[(int) x[i] - (int)'a']++;
    }
}