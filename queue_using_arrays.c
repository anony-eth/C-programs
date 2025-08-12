#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX_SIZE 5

int queue[MAX_SIZE], front = -1, rear = -1;

void enqueue(int element)
{
    if (rear == MAX_SIZE - 1)
        printf("\nQueue is Full.");
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = element;
    }
    else
    {
        rear++;
        queue[rear] = element;
    }
}

int dequeue()
{
    int item;
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
        item = queue[front++];
        return item;
    }
}
void peak()
{
    if (front == -1 && rear == -1)
        printf("\nQueue is Empty.");
    else
    {
        printf("The peak element is: %d", queue[rear]);
    }
}
void display()
{
    if (front == -1 && rear == -1)
        printf("\nQueue is Empty.");
    else
    {
        for (int i = front; i <= rear; i++)
            printf("%d\t", queue[i]);
    }
}
int main()
{
    int ch, data;
    do
    {
        printf("\n\nQueue Implementaion Using Arrays.\n1.Inqueue\n2.Dequeue\n3.Peak\n4.Display\n5.Exit");
        printf("\nEnter your choice (1 to 5) only: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter data to insert: ");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:
            printf("\nDeleted: %d", dequeue);
            break;
        case 3:
            peak();
            break;
        case 4:
            display();
            break;
        case 5:
            break;
        default:
            printf("\nIncorrect choice.");
        }
        // system("cls");
    } while (ch != 5);
    return 0;
}