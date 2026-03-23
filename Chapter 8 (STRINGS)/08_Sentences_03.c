#include <stdio.h>
#include<string.h>

void main(){
    char sentence[100];
    int i, ascii_value;
    printf("Enter the sentence :- ");
    fgets(sentence, sizeof(sentence), stdin);
    int len = strlen(sentence);
    for ( i = 0; i  < len; i++)
    {
        ascii_value = (int) sentence[i];
        if (ascii_value >= 65 && ascii_value <= 90)
        {
            sentence[i] = sentence[i] + 32 ;
        }
        else if (ascii_value >= 97 && ascii_value <= 122)
        {
            sentence[i] = sentence[i] - 32 ;
        }
        
    }
    printf("\n %s \n", sentence);
}