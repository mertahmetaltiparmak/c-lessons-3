#include <stdio.h>
#include <stdlib.h> 

void birlikCevir(int);
void onlukCevir(int);

int main() {

    int number = 0, d1, d2, d3, d4;
    while(number != -1) {
        printf("\nEnter a four digit number:");
        scanf("%d", &number);
        printf("\n");
        if(number == -1) 
            break;
        d1 = number % 10; //birler basamigi
        d2 = (number % 100) / 10; //onlar basamigi
        d3 = (number % 1000) / 10; //yuzler
        d4 = number / 1000; //binler
        if(d4 != 1) {
            birlikCevir(d4);
            printf("Bin ");
        }  
        if(d3 != 1) {
            birlikCevir(d3);
        } 
        if(d3 != 0) {
           printf("Yuz "); 
        } 
        onlukCevir(d2);
        printf(" ");
        birlikCevir(d1);
    }
    system("pause");
    return 0;
}
void birlikCevir(int number) {
    switch(number) {
        case 1: printf("Bir"); break;
        case 2: printf("Iki"); break;
        case 3: printf("Uc"); break;
        case 4: printf("Dort"); break;
        case 5: printf("Bes"); break;
        case 6: printf("Alti"); break;
        case 7: printf("Yedi"); break;
        case 8: printf("Sekiz"); break;
        case 9: printf("Dokuz"); break;
    }
}
void onlukCevir(int number) {
    switch(number) {
        case 1: printf("On"); break;
        case 2: printf("Yirmi"); break;
        case 3: printf("Otuz"); break;
        case 4: printf("Kirk"); break;
        case 5: printf("Elli"); break;
        case 6: printf("Altmis"); break;
        case 7: printf("Yetmis"); break;
        case 8: printf("Seksen"); break;
        case 9: printf("Doksan"); break;
    }
}

