#include <stdio.h>
#include <stdlib.h>

enum days {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};
int main() {
    enum days myConst;
    myConst = MONDAY;
    // veya monday yerine sayisal deger yazabilrdik mesela 1 gibi

    if (myConst == 6 || myConst == 7) {
        printf("Let's gooo");
    } else {
        printf("Nope");
    }
    return 0;
}