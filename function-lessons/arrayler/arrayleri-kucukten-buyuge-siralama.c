#include <stdio.h>
#include <stdlib.h>

void sortIt();
void writeTheArray();

int numbers[7];
int i;


int main() {

    printf("Enter a array number:");
    for(i = 0; i < 7; i++){
        scanf("%d", &numbers[i]);
    }
    printf("\n Before sorting \n");
    writeTheArray();
    printf("\n The array is sorting... \n");
    sortIt();
    printf("\n After sorting \n");
    writeTheArray();
    
    return 0;
}
void sortIt() {
    int j, reserve;
    for(i = 0; i < 7; i++) {
        for(j = i + 1; j < 7; j++) {
            if(numbers[j] < numbers[i]) {
                reserve = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = reserve;
            }
        }
    }

}
void writeTheArray() {
    for(i = 0; i < 7; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");
}