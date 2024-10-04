#include <stdio.h>
#include <stdlib.h>

void basHarfAlma(char*);

int main() {
    char message[100];
    puts("Cumle girin:");
    gets(message);
    printf("\nKisaltmasi\n-----> ");
    basHarfAlma(message);
    printf("\n");

    system("pause");
    return 0;
}
void basHarfAlma(char* ptr) { // ptr yerine message yazsakda fark etmez cunku sonuc olarak bir pointer ve adresteki degeri alacaktir.
    int i = 0;

    while (*(ptr + i) != '\0') {
        if (i == 0)
            putchar(*ptr);
        if (*(ptr + i) == ' ')
            putchar(*(ptr + i + 1));
            //sadece i olsaydi oradaki boslugu alirdi ama + 1 ekliyip onundeki sayiyi aldirdik.
        i++;
    }
}