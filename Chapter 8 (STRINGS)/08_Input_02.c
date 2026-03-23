#include <stdio.h>

void main()
{
    char name[50], vowel[10];
    // vowel[10]="AEIOUaeiou";
    int i, j, count01 = 0, count02 = 0;
    printf("Enter your name :- ");
    scanf("%s", name);
    for (i = 0; name[i] != '\0'; i++)
    {
        printf("%c", name[i]);
        count01++;
    }
    printf("the number of characters are %d", count01);
    for ( i = 0; name[i] != '\0'; i++)
    {
        if ( name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U' || name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' )
        {
            count02 = count02+1;;
        }
        
    }
    
    printf("\nthe number of vowel are %d", count02);

}
