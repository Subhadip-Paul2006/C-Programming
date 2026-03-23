#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int dt;
    struct list *nxt;
} node;

void create();
void display();
void insert();
void deleteNode();
void search();
void reverse();
node *make();

node *head = NULL, *ptr = NULL;

node *make()
{
    node *temp = (node *)malloc(sizeof(node));
    printf("Enter a number: ");
    scanf("%d", &temp->dt);
    temp->nxt = NULL;
    return temp;
}

void create()
{
    int x;
    if (head == NULL)
        ptr = NULL;
    else
    {
        ptr = head;
        while (ptr->nxt != NULL)
            ptr = ptr->nxt;
    }

    while (1)
    {
        if (head == NULL)
        {
            ptr = head = make();
        }
        else
        {
            ptr->nxt = make();
            ptr = ptr->nxt;
        }
        while (1)
        {
            printf("\nDo you want to continue?\n1 -> Yes\n0 -> No\nChoice: ");
            scanf("%d", &x);

            if (x == 1 || x == 0)
                break;
            else
                printf("Invalid input! Please enter 1 or 0.\n");
        }
        if (x == 0)
            break;
    }
}

void display()
{
    if (head == NULL)
    {
        printf("\nLinked list is empty.\n");
        return;
    }
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->dt);
        ptr = ptr->nxt;
    }
    printf("NULL\n");
}

void insert()
{
    int s, x, f = 0;
    node *temp = make();

    printf("\nHELLO\n");
    printf("\nWhere to insert?\n1 -> At First\n2 -> At Last\n3 -> In Between\nChoice: ");
    scanf("%d", &x);

    if (x == 1)
    {
        temp->nxt = head;
        head = temp;
    }
    else if (x == 2)
    {
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            ptr = head;
            while (ptr->nxt != NULL)
                ptr = ptr->nxt;
            ptr->nxt = temp;
        }
    }
    else if (x == 3)
    {
        printf("\nEnter the value to search: ");
        scanf("%d", &s);
        ptr = head;
        while (ptr != NULL)
        {
            if (ptr->dt == s)
            {
                f = 1;
                break;
            }
            ptr = ptr->nxt;
        }
        if (f == 1)
        {
            temp->nxt = ptr->nxt;
            ptr->nxt = temp;
        }
        else
        {
            printf("\nNumber not found.\n");
            free(temp);
        }
    }
    else
    {
        printf("\nInvalid option!\n");
        free(temp);
    }
}

void deleteNode()
{
    int x;
    printf("\nWhich node to delete?\n1 -> At First\n2 -> At Last\nChoice: ");
    scanf("%d", &x);

    if (x == 1)
    {
        if (head == NULL)
        {
            printf("\nThe Linked List is empty!");
        }
        else
        {
            node *temp = head;
            head = head->nxt;
            free(temp);
            printf("\nData removed");
        }
    }
    else if (x == 2)
    {
        if (head == NULL)
        {
            printf("\nThe Linked List is empty!");
        }
        else if (head->nxt == NULL)
        {
            free(head);
            head = NULL;
            printf("\nData removed");
        }
        else
        {
            ptr = head;
            while (ptr->nxt->nxt != NULL)
            {
                ptr = ptr->nxt;
            }
            free(ptr->nxt);
            ptr->nxt = NULL;
            printf("\nData removed");
        }
    }
    else
    {
        printf("\nInvalid option!\n");
    }
}

void search()
{
    int element, f = 0;
    printf("\nEnter the element to search: ");
    scanf("%d", &element);
    ptr = head;
    while (ptr != NULL)
    {
        if (ptr->dt == element)
        {
            f = 1;
            printf("%d element found", element);
            break;
        }
        ptr = ptr->nxt;
    }
    if (f == 0)
    {
        printf("%d element not found", element);
    }
}
void reverse()
{
    node *prev = NULL, *curr = head, *next = NULL;

    if (head == NULL)
    {
        printf("\nLinked list is empty.\n");
        return;
    }

    while (curr != NULL)
    {
        next = curr->nxt;   // store next node
        curr->nxt = prev;   // reverse link
        prev = curr;        // move prev
        curr = next;        // move curr
    }

    head = prev;
    printf("\nLinked list reversed successfully!\n");
}

int main()
{
    int x;
    while (1)
    {
        printf("\nMenu:\n1 -> Create\n2 -> Display\n3 -> Insert\n4 -> Delete\n5 -> Search\n6 -> Reverse\n0 -> Exit\nEnter your choice: ");
        scanf("%d", &x);

        if (x == 0)
        {
            break;
        }
        else if (x == 1)
        {
            create();
        }
        else if (x == 2)
        {
            display();
        }
        else if (x == 3)
        {
            insert();
        }
        else if (x == 4)
        {
            deleteNode();
        }
        else if (x == 5)
        {
            search();
        }
        else if (x == 6)
        {
            reverse();
        }
        else
        {
            printf("\nInvalid option!\n");
        }
    }
    return 0;
}
