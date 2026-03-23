#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int stack[100];
int top = -1;

void push(int number);
int pop();
void display();

void push( int number){
    if (top == 99)
    {
        printf("\nStack Full !!! ");
        exit(1);
    }
    top = top + 1;
    stack[top] = number ;
}

int pop( ){
    if (top == -1)
    {
        printf("\nStack Empty !!!");
        exit(1);
    }
    return ( stack[top --]);
}

void display( ){
    int i;
    printf("\nThe various stack elements are:\n");
    for ( i = top; i >= 0; i--)
    {
        printf(" %d ", stack[i]);
    }
    printf("\n");
}

void main()
{
    int choice;
    int num01 = 0, num02 = 0;
    while (1)
    {
        printf("\n(1) -> Push Element\n(2) -> Pop Element\n(3) -> Display Stack\n(4) -> Exit");
        printf("\nEnter Your Choice -> ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the element to push into stack :- ");
            scanf("%d", &num01);
            push(num01);
            break;
    
        case 2:
            num02 = pop( );
            printf("\n %d element popped out of the stack",num02);
            break;
    
        case 3: 
            display( );
            break;
    
        case 4:
            exit(1);
            break;
    
        default:
            printf("\nInvalid Choice ");
            break;
        }
    }   
}