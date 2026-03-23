#include <stdio.h>
#include <string.h>

void main()
{
    char sentence[100];
    char s[] = "";
    int i;
    char c;
    int count = 0;
    printf("Enter the sentence :-  ");
    gets(sentence);
    strcat(sentence, " ");
    int l = strlen(sentence);
    for (i = 0; i < l; i++)
    {
        c = sentence[i];
        if (c == ' ')
        {
            printf("%s \n", s);
            strcpy(s, "");
            count++;
        }
        else
        {
            strncat(s, &c, 1);
        }
    }
    printf("\n %d", count);
    // printf("%s", sentence);
}