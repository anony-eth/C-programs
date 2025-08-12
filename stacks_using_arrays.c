#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SIZE 5
void push();
void pop();
void peak();
void display();
int stack[SIZE], top = -1, ele;

int main()
{
    int ch;
    while (ch != 5)
    {
        printf("\n\nStack Implementaion Using Arrays.\n1.PUSH\n2.POP\n3.PEAK\n4.DISPLAY\n5.Exit");
        printf("\nEnter your choice (1 to 5) only: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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
            printf("\nEnterd wrong choice.");
        }
        // system("cls");
    }
    return 0;
}
void push()
{
    if (top == SIZE - 1)
        printf("\nStack is Full.");
    else
    {
        top++;
        printf("\nEnter the element to be inserted into the stack: ");
        scanf("%d", &ele);
        stack[top] = ele;
        printf("\nSuccessfully inserted");
    }
}
void pop()
{
    if (top == -1)
        printf("\nStack is Empty.");
    else
    {
        ele = stack[top];
        printf("\nDeleted item is %d", ele);
        top--;
    }
}
void peak()
{
    if (top == SIZE - 1)
        printf("\nStack is Full.");
    else
    {
        ele = stack[top];
        printf("\nThe topmost element is %d", ele);
    }
}
void display()
{
    if (top == -1)
        printf("\nStack is Empty.");
    else
    {
        printf("\nThe elements in the stack are:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}