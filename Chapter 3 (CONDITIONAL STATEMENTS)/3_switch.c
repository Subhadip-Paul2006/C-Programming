#include <stdio.h>

int main(){
    int a;
    printf("Enter value of a ");
    scanf("%d",&a);
    switch ( a ){
        case 1:
            printf("\nYou Entered 1");
            break;
        case 2:
            printf("\nYou Entered 2");
            break;
        case 3:
            printf("\nYou Entered 3");
            break;
        case 4:
            printf("\nYou Entered 4");
            break;
        default:
            printf("Wrong Input");
    }
    return 0;
}