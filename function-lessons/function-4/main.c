#include <stdio.h>
#include <stdlib.h>

void mesaj();//declaration(bildirim ana fonksiyonumuza mesaj adlý diger functionmizi bildiriyoruz)
int sumNumber(int, int);//declaration

int main()
{
    int result = sumNumber(5, 11);
    printf("Result is :%d\n", result);
    mesaj();
    return 0;
}
void mesaj(){
    printf("Low level programing\n");//defination calistirilacak kodlar bu da
}
int sumNumber(int x, int y){
    return x + y;
}
