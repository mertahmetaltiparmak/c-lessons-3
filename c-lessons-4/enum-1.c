#include <stdio.h>
#include <stdlib.h>

enum numbers {
    SMALL,
    MEDIUM,
    LARGE
};
// enum'lari buyuk harfle belirtmek daha iyi'dir ayni constlari buyuk harfle belirtdigimiz gibi
// enum const(yani sabitleri) array olarak tanimlayabilmezi saglar suan bir deger atanmadigi icin small = 0 degeri tutar.
// diger sabitlerin degeri bir artarak gider yani medium degeri = 1 ve large ise 2 ye esittir.

int main() {
    enum numbers myConst;
    myConst = LARGE;

    printf("%d\n",SMALL);
    printf("%d\n", MEDIUM);
    printf("%d\n", myConst);

    //enumlarle if else veya switch case de olusturabilirz mesela small = 0 yani false ise bunu yaz gibi 
    // switch'de ise case 0: bunu yaz case 1: sunu yaz diye yapilabilir.

    return 0;
} 