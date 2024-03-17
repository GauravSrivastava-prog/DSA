#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *pre;
};

struct node *head = NULL;
struct node *tail = NULL;

struct node *creat_node(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    new_node->pre = NULL;
    return new_node;
}

void insert_at_head(int data)
{
    struct node *new_node = creat_node(data);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        new_node->next = head;
        head->pre = new_node;
        head = new_node;
    }
}

void insert_at_tail(int data)
{
    struct node *new_node = creat_node(data);
    if (tail == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        new_node->pre = tail;
        tail->next = new_node;
        tail = new_node;
    }
}

void delete_at_head()
{
    if (head == NULL)
    {
        return;
    }
    struct node *temp = head;
    if (head == tail)
    {
        head = NULL;
        tail = NULL;
    }
    else
    {

        head = head->next;
        head->pre = NULL;
    }
    free(temp);
}

void delete_at_tail()
{
    if (tail == NULL)
    {
        return;
    }
    struct node *temp = tail;
    if (head == tail)
    {
        head = NULL;
        tail = NULL;
    }
    else
    {
        tail = tail->pre;

        tail->next = NULL;
    }
    free(temp);
}

void display()
{

    struct node *temp = head;
    while (temp != NULL)
    {
        printf(" -> %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    printf("Enter the num. of data : ");
    int n, a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter data %d : ", i + 1);
        scanf("%d", &a);
        insert_at_tail(a);
    }
    display();
    char ask, sask;
    while (1)
    {
        printf("\nDo you want to edit data(y/n) : ");
        scanf(" %c", &ask);
        if (ask == 'n' || ask == 'N')
        {
            break;
        }
        int m;
        printf("Enter what you want to do with your data : \n");
        printf("\t 1. Add\\delete data at the top.\n\t 2. Add\\delete data at last.\n");
        printf("Enter the index :- ");
        scanf("%d", &m);
        int data;
        switch (m)
        {
        case 1:

            printf("\nInsert/Delete (i/d) : ");
            scanf(" %c", &sask);
            switch (sask)
            {
            case 'i':

                printf("Enter Data : ");
                scanf("%d", &data);
                insert_at_head(data);
                display();
                break;

            case 'd':

                delete_at_head();
                display();
                break;
            }
            break;
        case 2:
            printf("Insert/Delete (i/d) : ");
            scanf(" %c", &sask);
            switch (sask)
            {
            case 'i':

                printf("Enter Data : ");
                scanf("%d", &data);
                insert_at_tail(data);
                display();
                break;

            case 'd':

                delete_at_tail();
                display();
                break;
            }
        }
    }
}