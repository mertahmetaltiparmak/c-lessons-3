#include <stdio.h>
#include <stdlib.h>

void menu();
int islemBir(int);
int islemIki(int);
int islemUc(int);

int main() {

    int number, option;
    
    menu();
    scanf("%d", &option);

    switch(option) {
        case 1:
            printf("Celsius girin:");
            scanf("%d", &number);
            printf("\n");

            printf("%d celsius = %d fahrenheit\n", number, islemBir(number));
            break;
        case 2:
            printf("Fahrenheit'i girin:");
            scanf("%d", &number);
            printf("\n");

            printf("%d fahrenheit = %d celsius\n", number, islemIki(number));
            break;
        case 3:
            printf("Celsius girin:");
            scanf("%d", &number);
            printf("\n");

            printf("%d celsius = %d kelvin\n", number, islemUc(number));
            break;
    }
    system("pause");
    return 0;
}
void menu() {
    printf("************************\n");
    printf("* Sicaklik Donusturucu *\n");
    printf("************************\n");

    printf("1 - Celsius'dan fahrenheit'a\n");
    printf("2 - Fahrenheit'dan Celsius'a\n");
    printf("3 - Celsius'dan Kelvine'a\n");
    printf("Yapmak istediginiz islemi secin:");
}
int islemBir(int c) {
    return (c * 9 / 5) + 32;
}
int islemIki(int f) {
    return (f - 32) * 5 / 9;
}
int islemUc(int c) {
    return c + 273;
}
