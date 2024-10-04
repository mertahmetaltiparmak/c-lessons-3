#include <stdio.h>
#include <stdlib.h>

struct books{
    char* name;
    char* writer;
    int numberOfPages;
    int year;
};
int main() {
    struct books x[2];
    
    x[0].name = "Paris ve Londra'da Bes Parasiz";
    x[0].writer = "George Orwell";
    x[0].numberOfPages = 250;
    x[0].year = 1986;

    x[1].name = "Aspridist";
    x[1].writer = "George Orwell";
    x[1].numberOfPages = 180;
    x[1].year = 1999;

    for (int i = 0; i < 2; i++) {
        printf("\n%d.Kitap\n\n", i + 1);
        printf("Kitabin ismi:%s\n", x[i].name);
        printf("Kitabin yazari:%s\n", x[i].writer);
        printf("Sayfa sayisi:%d\n", x[i].numberOfPages);
        printf("Yayinlanma yili:%d\n", x[i].year);
    }
    return 0;
}