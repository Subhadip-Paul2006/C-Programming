#include <stdio.h>
#include <string.h>

typedef struct Classroom
{
    char name[100];
    int age;
    char gender;
    float percent_10;
    float percent_12;
} st;

void main()
{
    st stu[3];
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("\nStudent %d", i + 1);
        printf("\nEnter the name age gender(m/f) per 10 and 12 :- ");
        scanf("%s %d %c %f %f", &stu[i].name, &stu[i].age, &stu[i].gender, &stu[i].percent_10, &stu[i].percent_12);
    }
    for (i = 0; i < 2; i++)
    {
        printf("\nStudent %d", i + 1);
        printf("%s---%d---%c---%f---%f\n", stu[i].name, stu[i].age, stu[i].gender, stu[i].percent_10, stu[i].percent_12);
    }
}