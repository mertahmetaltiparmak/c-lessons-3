#include <stdio.h>
#include <stdlib.h>

//int uzunluk(char*);

int main() {
    char cumle[100];

    printf("Bir cumle girin:");
    gets(cumle);    

    printf("\ngirdiginiz cumlenin uzunlugu:%d\n", strlen(cumle));
    // kolay yolu strlen kullanmak 
    system("pause");
    return 0;
}
/* int uzunluk(char* ptr) {
    int i = 0; 
    while(ptr[i] != '\0') {
        i++;
    }
    return i; */
    // enayi yolu da bu
//}