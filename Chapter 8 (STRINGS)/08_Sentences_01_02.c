#include <stdio.h>
#include<string.h>

void main(){
    int space = 32;
    char sentence[100];
    int i, x;
    printf("Enter the sentence :- ");
    fgets(sentence, sizeof(sentence), stdin);
    int len = strlen(sentence);
    for ( i = 0; i < len; i++)
    {
        x = (int) sentence[i];
        if (x == space)
        {
            printf("\n");
        }
        else {
            printf("%c", sentence[i]);
        }
        
    }
    
}