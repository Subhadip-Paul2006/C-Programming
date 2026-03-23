#include <stdio.h>
#include<string.h>

void main(){
    char sentence[100];
    char c = ' ';
    int i;
    printf("Enter the sentence :- ");
    gets(sentence);
    for ( i = 0; i  < strlen(sentence); i++)
    {
        if (sentence[i] == c)
        {
            sentence[i] = sentence[i] + 0 ;
        }
        else{
            sentence[i] = sentence[i] + 1 ;
        }
    }
    printf("%s",sentence);
}