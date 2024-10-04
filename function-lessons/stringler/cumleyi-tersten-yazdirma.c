#include <stdio.h>
#include <stdlib.h>

void reverse(char*);

int main() {
    char message[100];
    puts("Bir cumle girin");
    gets(message);
    reverse(message);
    printf("\n\n");
    
    system("pause");
    return 0;
}
void reverse(char* ptr) {
    int i = 0, lenght = 0;
    lenght = strlen(ptr);
    for (i = lenght - 1; i >= 0; i--) {
        // tersten basliyip sifara gittigi icin -- yazdik ve - 1 yazma nedenide \0 bir karakter olarak saymasi
        putchar(*(ptr + i));
    }
}