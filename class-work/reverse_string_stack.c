#include <stdio.h>
#include <string.h>
#define Max_Size 50

int top = -1;
char word[Max_Size];
char rev_word[Max_Size];

void push(char ch)
{
    if (top == (Max_Size - 1))
    {
        printf("Stack is Full\n");
    }
    else
    {
        top = top + 1;
        word[top] = ch;
    }
}

void pushnew(char temp)
{
    if (top == (Max_Size - 1))
    {
        printf("Stack is Full\n");
    }
    else
    {
        top = top + 1;
        rev_word[top] = temp;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is Empty.\n");
    }
    else
    {
        char temp;
        temp = word[top];
        top = top - 1;
        pushnew(temp);
    }
}

void display()
{
    printf("\nReversed Word :\n");
    for (int i = top; i >= 0; i--)
    {
        printf("-> %c", rev_word[i]);
    }
    printf("\n");
}

int main()
{
    char str[Max_Size];
    gets(str);
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        push(str[i]);
        pop();
    }
    printf("Original Word :\n");
    for (int i = 0; i <= top; i++)
    {
        printf("-> %c", word[i]);
    }
    display();
}