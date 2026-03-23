#include <stdio.h>
#include <stdlib.h>

int queue[5];
int front = -1;
int rear = -1;

void insert(int);
int del();
void display();

int main() {
    int choice;
    int num1 = 0, num2 = 0;

    while (1) {
        printf("\nSelect a choice from the following :");
        printf("\n[1] Add an element into the queue");
        printf("\n[2] Remove an element from the queue");
        printf("\n[3] Display the queue elements");
        printf("\n[4] Exit");
        printf("\n\tYour choice : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n\tEnter the element to be added to the queue : ");
                scanf("%d", &num1);
                insert(num1);
                break;

            case 2:
                num2 = del();
                if (num2 != -9999)
                    printf("\n\t%d element removed from the queue\n", num2);
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("\nInvalid choice !\n");
                break;
        }
    }
    return 0;
}

void insert(int element) {
    if ((front == 0 && rear == 4) || (rear + 1 == front)) {
        printf("\tQueue is Full. Element %d cannot be added into the queue\n", element);
        return;
    }

    if (front == -1) {
        front = 0;
        rear = 0;
    } else if (rear == 4) {
        rear = 0;
    } else {
        rear = rear + 1;
    }
    queue[rear] = element;
}

int del() {
    int i;

    if (front == -1) {
        printf("\n\tQueue is Empty.\n");
        return -9999;
    }

    i = queue[front];

    if (front == rear) {
        front = -1;
        rear = -1;
    } else if (front == 4) {
        front = 0;
    } else {
        front = front + 1;
    }

    return i;
}

void display() {
    int i;

    if (front == -1) {
        printf("\n\tQueue is Empty!\n");
        return;
    }

    printf("\n\tThe various queue elements are:\n");

    i = front;
    while (i != rear) {
        printf("\t%d", queue[i]);
        i = (i + 1) % 5;
    }
    printf("\t%d\n", queue[i]);
}
