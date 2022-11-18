#include <stdio.h>
#include <stdlib.h>
void push(void);
void pop(void);
void peek(void);
void display(void);
struct node
{
    int data;
    struct node *link;
};
struct node *top = NULL;
int main(void)
{
    short ch;
    while (1)
    {
        printf("1 : Push Element in Stack\n");
        printf("2 : Pop Stack Element\n");
        printf("3 : Peek Stack Element\n");
        printf("4 : Display Stack Elements\n");
        printf("5 : Exit\n");
        printf("Enter Your Choies :\n");
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
            break;
        }
    }
    return 0;
}
void push()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data\n");
    scanf("%d", &temp->data);
    temp->link = top;
    top = temp;
}
void pop()
{
    if (top == NULL)
        printf("Stack Underflow...!!\n");
    else
    {
        struct node *temp = top;
        printf("Element %d Deleted !!\n", temp->data);
        top = temp->link;
        free(temp);
    }
}
void peek()
{
    if (top == NULL)
        printf("Stack Underflow...!!\n");
    else
        printf("Peek Element : %d\n", top->data);
}
void display()
{
    if (top == NULL)
        printf("Stack Underflow...!!\n");
    else
    {
        printf("Stack Data :\n");
        struct node *temp = top;
        while (temp != NULL)
        {
            printf("-----------------\n|");
            printf("\t%d\t |\n", temp->data);
            printf("-----------------\n");
            temp = temp->link;
        }
    }
}
