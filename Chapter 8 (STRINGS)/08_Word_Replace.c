#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main()
{
    char s[] = "";
    char arr01[500], arr02[50][50], arr03[500], arr04[500];
    int i, j, x;
    char c;
    j = 0;
    printf("Enter the sentence :-  ");
    gets(arr01);
    printf("Enter the word to replace :-  ");
    gets(arr03);
    printf("Enter the word to replace :-  ");
    gets(arr04);
    strcat(arr01, " ");
    int l = strlen(arr01);
    int l2 = strlen(arr03);
    // for (i = 0; i <= l; i++)
    // {
    //     printf("word %d is %s..", arr01[i]);
    // }
    printf("\n we are out put ..... %s", arr01);

    for (i = 0; i < l; i++)
    {
        c = arr01[i];
        if (c == ' ')
        {
            printf("%s \n", s);
            strcpy(arr02[j], s);
            strcpy(s, "");
            j++;
        }
        else
        {
            strncat(s, &c, 1);
        }
    }
    for (i = 0; i <= j; i++)
    {
        printf("word %d is %s..", arr02[i]);
    }
    /* for ( i = 0; i < l2; i++)
     {
         x = strcpm(arr02, arr03[i]);
         if (x == 0)
         {

         }

     }*/
}