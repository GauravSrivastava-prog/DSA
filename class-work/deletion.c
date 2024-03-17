#include <stdio.h>

void delete(int arr[], int size, int n)
{
    int pos, elem;
    printf("Enter the index position at which you want to delete your element in the array: ");
    scanf("%d", &pos);
    for (int i = pos; i <= n; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < (n - 1); i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int size, n;
    printf("Enter the number of elements present in the array: ");
    scanf("%d", &n);
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    if (n == size)
    {
        printf("No empty space present in the array\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element: ", (i + 1));
        scanf("%d", &arr[i]);
    }
    delete (arr, size, n);
    return 0;
}