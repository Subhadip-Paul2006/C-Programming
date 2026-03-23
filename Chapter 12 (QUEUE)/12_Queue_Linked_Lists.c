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
        printf("Queue empty.\n");
        return;
    }
    printf("QUEUE:\n");
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->dt);
        ptr = ptr->nxt;
    }
    printf("NULL\n");
}

void enqueue()
{
    node *temp = make();
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        node *ptr = head;
        while (ptr->nxt != NULL)
        {
            ptr = ptr->nxt;
        }
        ptr->nxt = temp;
    }
}

void dequeue()
{
    if (head == NULL)
    {
        printf("Queue is empty!\n");
        return;
    }
    node *temp = head;
    printf("Dequeued: %d\n", head->dt);
    head = head->nxt;
    free(temp);
}

int main()
{
    int x;
    while (1)
    {
        printf("\nMenu:\n1 -> Display\n2 -> Enqueue\n3 -> Dequeue\n0 -> Exit\nEnter your choice: ");
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
            enqueue();
        }
        else if (x == 3)
        {
            dequeue();
        }
        else
        {
            printf("\nInvalid option!\n");
        }
    }
    return 0;
}
