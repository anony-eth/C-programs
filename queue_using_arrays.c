#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SIZE 5
int queue[SIZE], front = -1, rear = -1, item;

void enqueue(int item1)
{
    if ((rear + 1) % SIZE == front)
        printf("\nQueue is Full.");
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;   
        queue[rear] = item1;
    }
    else
    {
        rear = (rear + 1) % SIZE;
        queue[rear] = item1;
    }
}
int dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("\nQueue is empty.");
        return -1;
    }
    else if (front == rear)
    {
        item = queue[front];
        front = rear = -1;
        return item;
    }
    else
    {
        item = queue[front];
        front = (front + 1) % SIZE;
        return item;
    }
}
void peek()
{
    if (rear == -1)
        printf("\nQueue is Empty.\n");
    else
        printf("First element is %d\n", queue[front]);
}
void display()
{
    if (rear == -1)
        printf("\nQueue is Empty.\n");
    else
    {
        for (int i = front; i != rear; i = (i + 1) % SIZE)
            printf("%d\t", queue[i]);
        printf("%d\t", queue[rear]);
    }
}

int main()
{
    int ch;
    do
    {
        printf("\nQueue using arrays.\n1.Enqueue\n2.Dequeue\n3.Peek\n4.All elements\n5.Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            int a;
            printf("\nEnter: ");
            scanf("%d", &a);
            enqueue(a);
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
            break;
        default:
            printf("\nIncorrect Choice!");
            break;
        }
    } while (ch != 5);
    return 0;
}