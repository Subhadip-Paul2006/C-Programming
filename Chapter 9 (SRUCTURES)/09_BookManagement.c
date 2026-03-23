#include <stdio.h>

typedef struct book
{
    int id;
    int quantity;
    int price;
    char author[100];
    char name[100];
} st;

void display(st stu[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d", stu->id);
        printf("%d", stu->quantity);
        printf("%d", stu->price);
        printf("%s", stu->author);
        printf("%s", stu->name);
    }
}

void input(st stu[], int i)
{

    printf("\nEnter The Details Of Book ");
    printf("\nEnter The Book ID :- ");
    scanf("%d", &stu[i].id);
    printf("\nEnter The Book Quantity :- ");
    scanf("%d", &stu[i].quantity);
    printf("\nEnter The Book Price :- ");
    scanf("%d", &stu[i].price);
    printf("\nEnter The Book Author :- ");
    scanf(" %[^\n]", stu[i].author);
    printf("\nEnter The Book Name :- ");
    scanf(" %[^\n]", stu[i].name);
}


void main()
{
    int choice, x, len, c = 0;
    st bk[50];
    while (1)
    {
        printf("(1) -> Display Data\n(2) -> Input Data\n(3) -> Delete Data\n(4) -> Search Data\n");
        printf("Enter your choice :- ");
        scanf("%d", &choice);
        if (choice == 0)
        {
            break;
        }
        switch (choice)
        {
        case 1:
            printf("Display Data ");
            printf("There are %d number of Entries :- ", len);
            printf("\nID --- Quantity --- Price --- Author --- Name ");
            display(bk,c);
            break;
        case 2:
            printf("\nInput Data ");
            input(bk, c);
            c++;
            break;
        case 3:
            printf("\nDelet Data ");
            break;
        }
    }
}