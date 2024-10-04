#include <stdio.h>
#include <stdlib.h>

struct info {
    char* name;
    char* surname;
    int age;
};
void print(struct info x);

int main() {
    struct info x = { "Mert", "Altiparmak", 18};
    print(x);

    return 0;
}
void print(struct info x) {
    printf("Adim:%s\n", x.name);
    printf("Soyadim:%s\n", x.surname);
    printf("Yasim:%d", x.age);
}