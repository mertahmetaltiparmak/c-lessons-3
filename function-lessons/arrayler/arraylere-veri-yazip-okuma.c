#include <stdio.h>
#include <stdlib.h>

int main() {

    int option, index;
    double array[10], value;

    do {
        printf("1 - Write a array\n");
        printf("2 - Read a array\n");
        printf("Make a choice(-1 Exit):");
        scanf("%d", &option);
        printf("\n");

        if (option == -1) 
            break;
        if (option != 1 && option != 2) { 
            printf("Invalid value!\n\n");
            continue;
        }
        printf("Enter a array index:");
        scanf("%d", &index);
        printf("\n");

        if (index < 0 || index > 9){
            printf("Invalid index value!\n\n");
            continue;
        }
        switch (option) {
            case 1:
                printf("Enter a value:");
                scanf("%lf", &value);
                printf("\n");
                array[index] = value;
                printf("Done!\n\n");
                break ;
            case 2:
                printf("Array[%d] :%.2f\n\n", index, array[index]);
                break;    
        }
    } while (option != -1);
    
    system("pause");
    return 0;
}