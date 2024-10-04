#include <stdio.h>
#include <stdlib.h>

struct myInfo {
    char* name;
    char* surname;
    int age;
};
struct myHobbyInfo {
    char* hobbyOne;
    char* hobbyTwo;
    struct myInfo Hobbys;
    // Hobbys yerine istedigini yazabilirsin.
    int favoriteNumber;
};
int main() {
    struct myHobbyInfo y;
    y.hobbyOne = "Kodlama";
    y.hobbyTwo = "Muzik Dinlemek";
    y.favoriteNumber = 5;

    y.Hobbys.name = "Mert";
    y.Hobbys.surname = "Altiparmak";
    y.Hobbys.age = 18;

    printf("Adim:%s\n", y.Hobbys.name);
    printf("Soy adim:%s\n", y.Hobbys.surname);
    printf("Yasim:%d\n\n", y.Hobbys.age);

    printf("Hobilerim: %s   %s\n", y.hobbyOne, y.hobbyTwo);
    printf("Favori sayim:%d\n", y.favoriteNumber);

    return 0;
}