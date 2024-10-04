#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fptr;
    int numbers[5], i, option;
    fptr = fopen("C:\\Users\\Mertt\\Desktop\\code\\attempts6\\dosya-islemleri\\writeRead.txt", "r");
    // okuma islemini yapmiyor.
    if (fptr == NULL) {
        printf("process unsuccesfull.\n");
    } else {
        printf("2-Yaz\n1-Oku\n");
        scanf("%d", &option);
        switch(option) {
            case 1:
        fread(numbers, sizeof(int), 5, fptr);
        for (i = 0; i < 5; i++) {
            printf("%d\n", numbers[i]);   
        }
        printf("\n\nokuma islemi basarili.\n\n");
        break;
        // boyle de yazdirdigimiz seyi okuyoruz.
        //ama fread kullanirken yazma modunda acmayin ben yaptim siz yapmayin w yerine r yazin.
            case 2:
        printf("bes sayi girin:");
        for (i = 0; i < 5; i++) 
            scanf("%d", &numbers[i]);
            // [i] kullanmadigim icin butun sayilari ayni adrese yaziyorum. /:
        
        fwrite(numbers, sizeof(int), 5, fptr); 
        // boyle veri yazdirip sonra 
        // ikinci parametrede size'ni gir ucuncu parametrede miktar gir dorduncu parametrede pointer'i istiyor.
        printf("\nveri yazildi.\n");   

        // fread ile de fwrite yazdirdigimiz seyleri okuyoruz.
        break;
    }
        }
    fclose(fptr);

    system("pause");
    return 0;
}