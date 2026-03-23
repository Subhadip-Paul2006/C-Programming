#include <stdio.h>
#include <string.h>

typedef struct Classroom
{
    char name[100];
    int age;
    char gender;
    float percent_10;
    float percent_12;
}st;

void main()
{
    st stu01, stu02, stu03;
    printf("\nStudent 01");
    printf("\nEnter the name age gender(m/f) per 10 and 12 :- ");
    scanf("%s%d%c%f%f",&stu01.name,&stu01.age,&stu01.gender,&stu01.percent_10,&stu01.percent_12);
    printf("\nStudent 02");
    printf("\nEnter the name age gender(m/f) per 10 and 12 :- ");
    scanf("%s%d%c%f%f",&stu02.name,&stu02.age,&stu01.gender,&stu02.percent_10,&stu02.percent_12);
    printf("\nStudent 03");
    printf("\nEnter the name age gender(m/f) per 10 and 12 :- ");
    scanf("%s%d%c%f%f",&stu03.name,&stu03.age,&stu03.gender,&stu03.percent_10,&stu03.percent_12);

}