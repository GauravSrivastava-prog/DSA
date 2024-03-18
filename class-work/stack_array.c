// Push element in stack array
#include <stdio.h>
#define Max_size 10

int top = -1;
int stack[Max_size];

void push(int value)
{
    if (top == Max_size)
    {
        printf("Stack is Full\n");
    }
    else
    {
        top = top + 1;
        stack[top] = value;
    }
}

int pop()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
        return -1;
    }
    else
    {
        int temp;
        temp = stack[top];
        top = top - 1;
        return temp;
    }
}

void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("-> %d", stack[i]);
    }
    printf("\n");
}

int main()
{
    int value, m;
    char n;
choice:
{
    printf("1-> Push\n2-> Pop \n");
    scanf("%d", &m);
    switch (m)
    {
    case 1:
        printf("Enter value to push in stack array : ");
        scanf("%d", &value);
        push(value);
        display();
        break;

    case 2:
        pop();
        display();
        break;

    default:
        printf("Invalid Input !");
        break;
    }
    printf("\nDo you want to continue operation : ");
    scanf(" %c", &n); // Important : Always add a space behind %c if you are using characters to compare in if statements
    if (n == 'y' || n == 'Y')
    {
        goto choice;
    }
    else
    {
        printf("Exiting...");
    }
}
    return 0;
}