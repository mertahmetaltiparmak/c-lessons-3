#include <stdio.h>
#include <stdlib.h>

void count(char*);

int main() {
    char message[100];
    puts("Bir cumle girin:");
    gets(message);
    count(message);

    system("pause");
    return 0;
}
void count(char* ptr) {
    int letters[26], i = 0, lenght;
    char letter;
    lenght = strlen(ptr);

    for (i = 0; i < 26; i++) {
        letters[i] = 0;
        // butun harflerin icine 0 yazdirip baska deger tutmalarini onluyoruz eger bunu yapmassak sacma degerler verir.0
    }
    for (i = 0; i < lenght; i++) {
        letter = tolower(*(ptr + i));
        letters[letter - 97]++;
        // kucuk a 97'dedir ASCII karakteri olarak bu yuzden eger kucuk harf yazdırmak istiyorsak ve 0 1 2 3 diye a b c degerlerini tutmak istiyorsak boyle yapmalayız.
    }
    printf("Harf\t  Tekrar\n");
    printf("----\t  ------\n");
    for (i = 0; i < 26; i++) {
        if (letters[i] != 0) {
            printf("%c  ------>  %d\n",i + 97, letters[i]);
        }
    }
}
