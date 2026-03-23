#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct list
{
    int dt;
    struct list *nxt;
} node;

node *make();
void create(node **head);
void display(node *head);
void reverse(node **head);
void merge(node **head1, node **head2);

node *make()
{
    node *temp = (node *)malloc(sizeof(node));
    printf("Enter a number: ");
    scanf("%d", &temp->dt);
    temp->nxt = NULL;
    return temp;
}

void create(node **head)
{
    int x;
    node *ptr = NULL;

    while (1)
    {
        if (*head == NULL)
        {
            *head = make();
            ptr = *head;
        }
        else
        {
            ptr->nxt = make();
            ptr = ptr->nxt;
        }

        printf("\nContinue?\n1 -> Yes\n0 -> No\nEnter your choice: ");
        scanf("%d", &x);
        if (x == 0)
            break;
    }
}

void marge(node **head1, node **head2)
{
    node *ptr = *head1;
    while (ptr->nxt != NULL)
        ptr = ptr->nxt;
    ptr->nxt = *head2;
}

void display(node *head)
{
    if (head == NULL) 
    {
        printf("List is empty\n");
        return;
    }

    while (head != NULL)
    {
        printf("%d -> ", head->dt);
        head = head->nxt;
    }
    printf("NULL\n");
}

int main()
{
    node *head1 = NULL; // -> linked list 01
    node *head2 = NULL; // -> linked list 02
    int ch, choice;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1 -> Create any Linked List\n");
        printf("2 -> Display any Linked List\n");
        printf("3 ->Marge Link List\n");
        printf("0 -> Exit\n");
        scanf("%d", &ch);

        if (ch == 0)
            break;

        printf("\nSelect Linked List: \n1 ->Linked  List 1\n2 ->Linked  List 2\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) // -> operations on linked list 1
        {
            switch (ch)
            {
            case 1:
                create(&head1);
                break;
            case 2:
                display(head1);
                break;
            case 3:
                marge(&head1, &head2);
                break;
            default:
                printf("Invalid choice\n");
            }
        }
        else if (choice == 2) // -> operation of linked list 2
        {
            switch (ch)
            {
            case 1:
                create(&head2);
                break;
            case 2:
                display(head2);
                break;
            case 3:
                marge(&head1, &head2);
                break;
            default:
                printf("Invalid choice\n");
            }
        }
        else
        {
            printf("Invalid list selection\n");
        }
    }
    return 0;
}
