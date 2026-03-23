#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

int isFull();
int isEmpty();
void enqueue(int value);
void dequeue(int dequeue);
void peek();
void display();

// Check if queue is full
int isFull() {
    return (front == (rear + 1) % MAX);
}

// Check if queue is empty
int isEmpty() {
    return (front == -1);
}

// ENQUEUE
void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow\n");
        return;
    }

    if (front == -1)  // First element
        front = 0;

    rear = (rear + 1) % MAX;
    queue[rear] = value;

    printf("Inserted: %d\n", value);
}

// DEQUEUE Function
void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted: %d\n", queue[front]);

    if (front == rear) {
        // Only one element
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
}

// PEEK Function
void peek() {
    if (isEmpty()) {
        printf("Queue is empty\n");
    } else {
        printf("Front element: %d\n", queue[front]);
    }
}

// DISPLAY Function
void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }

    int i = front;
    printf("Queue elements:\n");

    while (1) {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- CIRCULAR QUEUE MENU ---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
