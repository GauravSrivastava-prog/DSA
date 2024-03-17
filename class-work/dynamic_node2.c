#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int n;
    printf("Enter number of nodes you wanna insert : ");
    scanf("%d", &n);
    struct node *head;
    struct node *p;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            head = (struct node *)malloc(sizeof(struct node *));
            p = head;
        }
        else
        {
            p->next = (struct node *)malloc(sizeof(struct node *));
            p = p->next;
        }
        scanf("%d", &p->data);
    }
    p->next = NULL;
    p = head;
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
    return 0;
}