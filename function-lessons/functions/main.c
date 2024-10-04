#include <stdio.h>
#include <stdlib.h>

//    void myFunction(){
//        printf("I recall my function\n");}
    void nameList(char name[], int age){
        printf("%s. you are %d years old \n", name, age);
    }
int main()
{
//    myFunction();

    nameList("Mert", 18);
    nameList("Ozgur", 41);
    return 0;
}
