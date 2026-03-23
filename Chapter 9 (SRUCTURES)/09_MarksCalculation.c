#include <stdio.h>

typedef struct data
{
    int maths, science, ssc, bengali, english;
}st;

void main(){
    int n, i;
    printf("Enter the number of students :- "); scanf("%d", &n);
    st marks[n];
    char name[n][100];
    for ( i = 0; i < n; i++)
    {
        printf("Enter the Name of Student 01 :-"); fgets(name[i], sizeof(name[i]), stdin);
        printf("Enter the marks of Maths of student %d :-", i);scanf("%d", &marks[i].maths);
        printf("Enter the marks of Science of student %d :-", i);scanf("%d", &marks[i].science);
        printf("Enter the marks of Social Science of student %d :-", i);scanf("%d", &marks[i].ssc);
        printf("Enter the marks of Bengali of student %d :-", i);scanf("%d", &marks[i].bengali);
        printf("Enter the marks of Maths of student %d :-", i);scanf("%d", &marks[i].english);
    }
    












































































    

    
}