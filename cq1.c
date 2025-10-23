#include <stdio.h>
#define MAX_SIZE 5

int cq[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int item) 
{
    int next;
    if (front == -1 && rear == -1) 
    {
        front = rear = 0;
        cq[rear] = item;
    }
    else 
    {
        next = (rear + 1) % MAX_SIZE;
        if (next != front) 
        {
            rear = next;
            cq[rear] = item;
        } 
        else 
        {
            printf("Queue is full!\n");
            return;
        }
    }
    printf("%d inserted.\n", item);
}
void dequeue() 
{
    if (front == -1) 
    {
        printf("Queue is empty!\n");
        return;
    }
    printf("Deleted element: %d\n", cq[front]);
    if (front == rear) 
    {
        front = rear = -1;
    } 
    else 
    {
        front = (front + 1) % MAX_SIZE;
    }
}
void display() 
{
    if (front == -1) 
    {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while (i != rear) 
    {
        printf("%d ", cq[i]);
        i = (i + 1) % MAX_SIZE;
    }
    printf("%d\n", cq[rear]);
}
int main() 
{
    int n, item;
    do 
    {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &n);
        switch (n) 
        {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &item);
                enqueue(item);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice!\n");
                break;
        }
    } while (n != 4);
    return 0;
}

