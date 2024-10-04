#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int number[] ={1, 2, 3, 4, 5, 6, 7}; 
    int i;

    for(i = 0; i <= 6; i++) {
        printf("%d\n", number[i]);
    }
    return 0;
}

/*int notes[4]; burada arreyimizin kac elemanlı oldugunu belirtip altta elemanları tanımladım boylede kullanilabilirmis
notes[0] = 5;
notes[1] = 15;
notes[2] = 25;
notes[3] = 35;
int sum;

sum = notes[0] + notes[3];
arrayleri boyle toplayabiliryoruz da ayni zamandas

*/
