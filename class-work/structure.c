#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

struct employee
{
    char name[20];
    long int ID;
    int salary;
    struct date dob;
};

int main()
{
    int size;
    printf("Enter number of employee's : ");
    scanf("%d", &size);
    struct employee arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d Employee name : ", (i + 1));
        scanf("%s", arr[i].name);
        printf("Enter %d Employee ID : ", (i + 1));
        scanf("%ld", &arr[i].ID);
        printf("Enter %d Employee salary : ", (i + 1));
        scanf("%d", &arr[i].salary);
        printf("Enter %d Employee Date of Birth : ", (i + 1));
        scanf("%d", &arr[i].dob.day);
        printf("Enter %d Employee Month of Birth : ", (i + 1));
        scanf("%d", &arr[i].dob.month);
        printf("Enter %d Employee Year of Birth : ", (i + 1));
        scanf("%d", &arr[i].dob.year);
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d Employee name : %s\n", (i + 1), arr[i].name);
        printf("%d Employee ID : %ld\n", (i + 1), arr[i].ID);
        printf("%d Employee salary : %d\n", (i + 1), arr[i].salary);
        printf("%d Employee Date of Birth : %d/%d/%d\n", (i + 1), arr[i].dob.day, arr[i].dob.month, arr[i].dob.year);
    }
    return 0;
}