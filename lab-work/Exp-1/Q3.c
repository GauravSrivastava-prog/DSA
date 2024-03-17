#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int i = 0;
    printf("Enter string : ");
    fgets(str, 1000, stdin);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%c", str[i] + 32);
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    return 0;
}