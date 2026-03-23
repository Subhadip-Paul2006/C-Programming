#include <stdio.h>
#include<string.h>


void main(){
    int i;
    char word01[100];
    char word02[100];
    char word03[100];
    printf("Enter the first word :- ");
    fgets(word01, sizeof(word01),stdin);
    printf("Enter the second word :- ");
    fgets(word02, sizeof(word02),stdin);
    word01[strcspn(word01, "\n")] = '\0';
    word02[strcspn(word02, "\n")] = '\0';
    printf("\nFirst String %s and length = %ld ", word01, strlen(word01));
    printf("\nSecond String %s and length = %ld ", word02, strlen(word02));
    int comp = strcmp( word01 , word02 );
    if (comp != 0)
    {
        strcat( word01 , word02 );
        strcpy( word03 , word01 );
        printf("\nFinal String %s and length = %ld ", word03, strlen(word03));
    }
    else{
        strcpy( word03 , word01 );
        printf("\nThird String %s and length = %ld ", word03, strlen(word03));
    }

}