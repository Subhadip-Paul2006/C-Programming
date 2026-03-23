#include<stdio.h>
#include<string.h>
void main(){
    int i, len,j,c;
    char sentence01[100];
    char sentence02[100];
    printf("\nEnter the string :- ");
    fgets(sentence01, sizeof(sentence01), stdin);
    len = sizeof(sentence01);
    strcpy(sentence02,strupr (sentence01));
    for(j=65;j<=90;j++)
    {
        c=0;
       for ( i = 0; i < len; i++)
      {
             if(j==(int)sentence02[i])
             {
                c++;
             }

      }
      if(c>0)
      {
        printf("%c occour %d times\n ",j,c);
      }
   }
        
}