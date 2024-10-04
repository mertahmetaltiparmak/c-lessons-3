#include <stdio.h>
#include <stdlib.h>

struct cars {
    char* brand;
    char model[50];
    int year;
};
int main() {
    struct cars a1 = {"Ford", "Escort", 1990};
    struct cars a2 = {"Ford", "Mustang", 2010};
    struct cars a3 = {"BMW", "i8", 2022};
    struct cars a4 = {"Mercedes", "e200", 2020};

    printf("%s\t%s\t%d\n", a1.brand, a1.model, a1.year);
    printf("%s\t%s\t%d\n", a2.brand, a2.model, a2.year);
    printf("%s\t%s\t%d\n", a3.brand, a3.model, a3.year);
    printf("%s\t%s\t%d\n", a4.brand, a4.model, a4.year);

}