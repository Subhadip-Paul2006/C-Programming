#include <stdio.h>

typedef struct data
{
    int maths, science, ssc, bengali, english, avaerage;
}st;

void main(){
    int n, i,sum;
    sum = 0;
    printf("Enter the number of students :- "); scanf("%d", &n);
    st marks[n];
    char name[n][100];
    for ( i = 0; i < n; i++)
    {
        printf("Enter the marks of Maths of student %d :-", i);scanf("%d", &marks[i].maths);
        sum = sum + marks->maths; 
        printf("Enter the marks of Science of student %d :-", i);scanf("%d", &marks[i].science);
        sum = sum + marks->science;
        printf("Enter the marks of Social Science of student %d :-", i);scanf("%d", &marks[i].ssc);
        sum = sum + marks->ssc;
        printf("Enter the marks of Bengali of student %d :-", i);scanf("%d", &marks[i].bengali);
        sum = sum + marks->bengali;
        printf("Enter the marks of Maths of student %d :-", i);scanf("%d", &marks[i].english);
        sum = sum + marks->english;
    }
    


    
}