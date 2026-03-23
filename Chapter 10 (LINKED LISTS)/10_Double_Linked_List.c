#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int data;
    struct list *prev;
    struct list *next;
} node;

node *head = NULL;

/* Create a new node */
node *make()
{
    node *temp = (node *)malloc(sizeof(node));

    if (temp == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    printf("Enter value: ");
    scanf("%d", &temp->data);

    temp->prev = NULL;
    temp->next = NULL;

    return temp;
}

/* Create doubly linked list */
void create()
{
    int choice;
    node *ptr = head;

    while (1)
    {
        if (head == NULL)
        {
            head = make();
            ptr = head;
        }
        else
        {
            while (ptr->next != NULL)
                ptr = ptr->next;

            ptr->next = make();
            ptr->next->prev = ptr;
        }

        printf("Continue? (1-Yes / 0-No): ");
        scanf("%d", &choice);

        if (choice == 0)
            break;
    }
}

/* Display list forward and backward */
void display()
{
    node *ptr;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    ptr = head;
    printf("Forward: ");
    while (ptr->next != NULL)
    {
        printf("%d <-> ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d -> NULL\n", ptr->data);

    printf("Backward: ");
    while (ptr != NULL)
    {
        printf("%d <-> ", ptr->data);
        ptr = ptr->prev;
    }
    printf("NULL\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n1 -> Create Double Linked List\n2 -> Display Double Linked List\n0 -> Exit\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            create();
        }
        else if (choice == 2)
        {
            display();
        }
        else if (choice == 0)
        {
            break;
        }
        else
        {
            printf("Invalid choice\n");
        }
    }
    return 0;
}
