#include <stdio.h>
#include <stdlib.h>

struct students{
    char myLetter;
    char* name;
    char* lastname;
    int no;
    float score;
    char nameTwo[40];
};
int main() {
    struct students x = {'W', "Mert", "Altiparmak", 1150, 99.5};
    struct students x2;

    x = x2;

    printf("%c\n", x.myLetter);
    printf("%s\n", x.name);
    printf("%s\n", x.lastname);
    printf("%d\n", x.no);
    printf("%f\n", x.score);

    printf("\n----------------------\n\n");
    printf("%c\n", x2.myLetter);
    printf("%s\n", x2.name);
    printf("%s\n", x2.lastname);
    printf("%d\n", x2.no);
    printf("%f\n", x2.score);



    return 0;
}