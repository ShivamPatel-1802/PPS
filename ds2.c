#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;


int push(int value)
{
    if (top == MAX - 1)
        return -1;     

    stack[++top] = value;
    return 1;           
}

int pop()
{
    if (top == -1)
        return -1;      

    return stack[top--];
}


int peek()
{
    if (top == -1)
        return -1;     

    return stack[top];
}


int display()
{
    if (top == -1)
        return -1;

    for (int i = top; i >= 0; i--)
        printf("%d ", stack[i]);

    printf("\n");
    return 1;
}

int isEmpty()
{
    return (top == -1);
}

int isFull()
{
    return (top == MAX - 1);
}