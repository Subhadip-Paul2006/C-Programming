#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int dt;
    struct list *nxt;
} node;

node *head = NULL;

node *make()
{
    node *temp = (node *)malloc(sizeof(node));
    if (temp == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    printf("Enter data: ");
    scanf("%d", &temp->dt);
    temp->nxt = NULL;
    return temp;
}

void display()
{
    node *ptr = head;
    if (ptr == NULL)
    {
        printf("Stack empty.\n");
        return;
    }
    printf("Stack (top to bottom): \n");
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->dt);
        ptr = ptr->nxt;
    }
    printf("NULL\n");
}

void push()
{
    node *temp = make();
    temp->nxt = head;
    head = temp;
}

void pop()
{
    if (head == NULL)
    {
        printf("\nThe Stack is empty!\n");
    }
    else
    {
        node *temp = head;
        printf("Element popped out of stack.\n", head->dt);
        head = head->nxt;
    }
}

int main()
{
    int x;
    while (1)
    {
        printf("\nMenu:\n1 -> Display\n2 -> Push\n3 -> Pop\n0 -> Exit\nEnter your choice: ");
        scanf("%d", &x);
        if (x == 0)
        {
            break;
        }
        else if (x == 1)
        {
            display();
        }
        else if (x == 2)
        {
            push();
        }
        else if (x == 3)
        {
            pop();
        }
        else
        {
            printf("\nInvalid option!\n");
        }
    }
    return 0;
}
