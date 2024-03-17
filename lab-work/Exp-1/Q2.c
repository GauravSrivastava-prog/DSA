#include <stdio.h>

void insertion(int arr[], int size);

void deletion(int arr[], int size);

int main()
{
    int size = 0;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    insertion(arr, size);
    deletion(arr, size);
}

void insertion(int arr[], int size)
{
    int pos, elem;
    printf("\nEnter the position at which you wanna insert your element : ");
    scanf("%d", &pos);
    size++;
    for (int i = (size - 2); i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    printf("\nEnter the element you wanna insert at %d position : ", pos);
    scanf("%d", &elem);
    arr[pos] = elem;
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] : %d\n", i, arr[i]);
    }
}

void deletion(int arr[], int size)
{
    int pos;
    printf("\nEnter the position that you want to delete in the array : ");
    scanf("%d", &pos);
    for (int i = pos; i <= size; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] : %d\n", i, arr[i]);
    }
}