#include <stdio.h>
#include <stdlib.h>

int queue[100];
int front = -1;
int rear = -1;

void insert_element(int number) {
    if (rear == 99) {
        printf("\nQueue is full");
        return;
    }

    if (front == -1) {
        front = 0;
        rear = 0;
    } else {
        rear++;
    }

    queue[rear] = number;
}

int delet_element() {
    if (front == -1) {
        printf("\nQueue is empty");
        return 0;
    }

    int item = queue[front];

    if (front == rear) {
        front = rear = -1;  // queue becomes empty
    } else {
        front++;
    }

    return item;
}

void display() {
    if (front == -1) {
        printf("\nQueue is empty");
        return;
    }

    printf("\nThe various queue elements are:\n");
    for (int i = front; i <= rear; i++) {
        printf(" %d", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, num;

    while (1) {
        printf("\n 1 -> Insert Element to Queue ");
        printf("\n 2 -> Remove Element From Queue ");
        printf("\n 3 -> Display Queue");
        printf("\n 4 -> Exit ");
        printf("\nEnter Your Choice Please :- ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("\nEnter the element to insert: ");
            scanf("%d", &num);
            insert_element(num);
            break;
        case 2:
            num = delet_element();
            if (num != 0)
                printf("\n%d Element removed from the queue", num);
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid Choice");
        }
    }
    return 0;
}
