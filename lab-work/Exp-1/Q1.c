#include <stdio.h>

int add(int arr[], int size);

int main()
{
    int size = 0, sum = 0;
    printf("Enter size of the array: \n");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    sum = add(arr, (size - 1));
    printf("%d \n", sum);
}

int add(int arr[], int size)
{
    if (size < 0)
    {
        return 0;
    }
    else
    {
        return arr[size] + add(arr, size - 1);
    }
}