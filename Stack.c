#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 3
int st[MAX], top = -1;
void push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);
int main()
{
    int val, option;
    do
    {
        printf("MAIN MENU");
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. PEEK");
        printf("\n4. DISPLAY");
        printf("\n5. EXIT");
        printf("\nEnter your option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter the number to be pushed on stack: ");
            scanf("%d", &val);
            push(st, val);
            break;
        case 2:
            val = pop(st);
            if (val != -1)
                printf("The value deleted from the stack is: %d\n", val);
            break;
        case 3:
            val = peek(st);
            if (val != -1)
                printf("The value stored at the top of the stack is: %d\n", val);
            break;
        case 4:
            display(st);
            break;
        }
    } while (option != 5);
    return 0;
}
void push(int st[], int val)
{
    if (top == MAX - 1)
        printf("\nStack Overflow");
    else
    {
        top++;
        st[top] = val;
    }
}
int pop(int st[])
{
    int val;
    if (top == -1)
    {
        printf("\nStack Underflow");
        return -1;
    }
    else
    {
        val = st[top];
        top--;
        return val;
    }
}
void display(int st[])
{
    int i;
    if (top == -1)
        printf("\nStack is empty");
    else
    {
        for (i = top; i >= 0; i--)
            printf("%d\n", st[i]);
    }
}
int peek(int st[])
{
    if (top == -1)
    {
        printf("\nStack is empty");
        return -1;
    }
    else
        return st[top];
}