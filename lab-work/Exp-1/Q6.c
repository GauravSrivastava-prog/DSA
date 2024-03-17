#include <stdio.h>
#include <stdbool.h>

int n, elem;

bool search(int arr[])
{
    for (int i = 0; i < n; i++)
    {
        if (elem == arr[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    printf("How many numbers do you want to enter ? \n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number : ", (i + 1));
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you wanna search : ");
    scanf("%d", &elem);
    if (search(arr) == true)
    {
        printf("Element Found !\n");
    }
    else
    {
        printf("Not found : - ( \n");
    }
}
