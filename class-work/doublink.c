#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

struct node *create_node(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node *));
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}

void insert_at_head(int data)
{
    struct node *new_node = create_node(data);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
}

int main()
{
    /*int n, j = 0, data;
    printf("Enter number of nodes you wanna insert : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter data you wanna insert in node %d : ", i + 1);
        scanf("%d", &data);
        insert_at_head(data);
    }*/
    insert_at_head(1);
    insert_at_head(2);
    insert_at_head(3);
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
    return 0;
}