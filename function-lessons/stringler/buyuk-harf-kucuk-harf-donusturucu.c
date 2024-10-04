#include <stdio.h>
#include <stdlib.h>

void upperToLowwer(char*);
void lowwerToUpper(char*);
void menu();

int main() {
    char message[100];
    int option;

    menu();
    scanf("%d", &option);
    // scanf'den sonra gets kullanilamaz bu yuzden araya getchar koyulur.
    getchar();

    switch (option) {
        case 1:
            printf("\nbuyuk harflerden olusan bir cumle girin:");
            gets(message);
            printf("\n");
            upperToLowwer(message); 
            printf("\n\n");

            break;
        case 2:
            printf("\nkucuk harflerden olusan bir cumle girin:");
            gets(message); 
            printf("\n");
            lowwerToUpper(message);
            printf("\n\n");
            break;         
        default:
            puts("Gecersiz deger.");
    }
    system("pause");
    return 0;
}
void menu() {
    printf("1 - kucuk harfe cevirme\n");
    printf("2 - buyuk harfe cevirme\n");
    printf("\nyapmak istediginiz islemi secin:");
}
void upperToLowwer(char* ptr) {
    for (; *ptr != '\0'; ptr++) { // ilk ; sebebi sadece 2 statement bildircegimiz icin o ifadeyi gectik
        if (*ptr >= 'A' && *ptr <= 'Z') {
            putchar(*ptr +32);
            // +32 eklememizin nedeni buyuk A nin ASCII degeri 65 kucuk a nin ise 97'dir ve boyle devam eder o yuzden
        } else {
            putchar(*ptr);
        }
    }
}
void lowwerToUpper(char* ptr) {
    for (; *ptr != '\0'; ptr++) { 
        if (*ptr >= 'a' && *ptr <= 'z') {
            putchar(*ptr -32);
        } else {
            putchar(*ptr);
        }
    }
}