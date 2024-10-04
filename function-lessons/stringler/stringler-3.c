#include <stdio.h>
#include <stdlib.h>

int main() {
    char mesaj[] = "Herşey'e \\ bok atmak \"cok\" onemlidir";
    // ilk \\ lar \ birakir 'e duz ayrildi \"cok\" "cok" diye yazdirir.

    printf("%s\n\n", mesaj);
    // stringler %s ile yazdirilir.
    char* mesajIki = "Sa nasilsin ?\n";
    int i;
    while (*(mesajIki + i) != '\0') {
        // * isaretini unutma !!
        printf("%c\n", *(mesajIki + i));
        i++;
    }
    return 0;
}