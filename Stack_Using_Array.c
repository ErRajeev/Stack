#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 5
int stack[CAPACITY], top = -1;
void push(void);
int isFull(void);
int pop(void);
int isEmpty(void);
void peek(void);
void display(void);
int main(void)
{
    short ch;
    while (1)
    {
        printf("1 : Push Element in Stack\n");
        printf("2 : Pop Stack Element\n");
        printf("3 : Peek Stack Element\n");
        printf("4 : Display Stack Elements\n");
        printf("5 : Exit\n\n");
        printf("Enter your Choice :\n");
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
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Choice...!!\n");
            break;
        }
    }
    return 0;
}
void push()
{
    int item;
    printf("Enter Element :\n");
    scanf("%d", &item);
    if (isFull())
        printf("Stack Overflow :\n");
    else
    {
        top++;
        stack[top] = item;
        printf("Element %d Pushed.\n", item);
    }
}
int isFull()
{
    if (top == CAPACITY - 1)
        return 1;
    else
        return 0;
}
int pop()
{
    if (isEmpty())
        printf("Stack is UnderFlow...!!\n");
    else
    {
        printf("Pop Element : %d\n", stack[top]);
        stack[top--];
    }
}
int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
void peek()
{
    if (isEmpty())
        printf("Stack is UnderFlow...!!\n");
    else
        printf("Peek Element : %d\n", stack[top]);
}
void display()
{
    if (isEmpty())
        printf("Stack is UnderFlow...!!\n");
    else
    {
        printf("Stack Emlements are :\n");
        for (int i = top; i >= 0; i--)
            printf("Element %d : %d\n", i + 1, stack[i]);
    }
    printf("\n");
}
