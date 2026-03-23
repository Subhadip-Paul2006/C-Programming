#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *InsertAtHead(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
};

struct Node *InsertAtPosition(struct Node *head, int index, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head ;
    int i = 0;
    while (i != (index - 1))
    {
        p = p -> next;
    }
    ptr -> data = data;
    ptr -> next = p -> next;
    p -> next = ptr;
    return head;
}

struct Node* InsertAtEnd( struct Node *head, int data){
    struct Node *ptr = ( struct Node *)malloc(sizeof(struct Node));
    ptr -> data = data;
    struct Node *p = head;
    while( p -> next != NULL ){
        p = p -> next;
    }
    ptr -> next = NULL;
    p -> next = ptr;
    return head;
}

void main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    int NewElement, choice01, choice02, position;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 69;
    third->next = NULL;

    printf("Original Linked List: \n");
    LinkedListTraversal(head);

    printf("\nEnter Your Choice: "); scanf("%d", &choice01);
    
    while ( 1 )
    {
        if ( choice01 == 0 )
        {
            printf("\nThank You !");
        }
        else if ( choice01 == 1)
        {
            printf("\n(1) -> Insert at Starting of Linked List \n(2) -> Insert in Between Linked List\n(3) -> Insert at the End Of Linked List ");
            printf("\nEnter your choice: "); scanf("%d", &choice02);
            if ( choice02 == 1 )
            {
                printf("Enter the Element to Insert at Head: ");
                scanf("%d", &NewElement); 
                head = InsertAtHead( head, NewElement);   
            }
            else if ( choice02 == 2 )
            {
                printf("Enter the Position to Insert New Element: ");
                scanf("%d", &position);
                printf("Enter the Element to Insert in Between: ");
                scanf("%d", &NewElement);
                head = InsertAtPosition( head, position, NewElement );
            }
            else if ( choice02 == 3 )
            {
                printf("Enter the Element to Insert at End: ");
                scanf("%d", &NewElement); 
                head = InsertAtEnd( head, NewElement); 
            }
            else{
                printf("\nInvalid choice \n ");
            } 
        }
        else if ( choice01 == 2 )
        {
            /* code */
        }
        
        
        
    }
    
   
    LinkedListTraversal(head);
}