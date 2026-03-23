#include <stdio.h>
#include<string.h>

void main(){
    char sentence[100];
    int i, len, x, y;
    int count = 0;
    char search; // character to search in string
    printf("\nEnter the string :- ");
    fgets(sentence, sizeof(sentence), stdin);
    printf("\nEnter the character frequency you want to count :- ");
    scanf("%c", &search);
    y = (int)search ;
    len = strlen(sentence);
    for ( i = 0; i < len; i++)
    {
        x = (int) sentence[i];
        if ( x == y )
        {
            count++ ;
        }
        
    }
    
    printf("\nThe occurance of character %c is %d times", search, count);
}