#include <stdio.h>

int main(){
    char character;
    printf("Enter The Character To Check: ");
    scanf("%c", &character);
    printf("The Character is %c\n",  character);
    printf("The ASCII Valu Of Character is %d\n",  character);
    if ( character >= 97 && character <= 122 ){
        printf("LowerCase Character\n");
    }
    else if ( character >= 65 && character <= 90 ){
        printf("UpperCase Character\n");
    }
    else{
        printf("Wrong input");
    }
    return 0;
}