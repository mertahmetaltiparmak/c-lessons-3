#include <stdio.h>
#include <stdlib.h>

struct info {
    char* name;
    char* middleName;
    int dogumYili;
};
void print(struct info*);

int main() {
    struct info x;
    struct info* y;

    y = &x;

    (*y).name = "Mert";
    (*y).middleName = "Ahmet";
    (*y).dogumYili = 2006;

    print(y);
        
    return 0;
}
void print(struct info* ptr) {
    printf("Adim:%s\n", (*ptr).name);
    printf("Ikinci Adim:%s\n", (*ptr).middleName);
    printf("Dogum yilim:%d\n", (*ptr).dogumYili);
}