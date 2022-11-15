// Simple program that uses switch statement

#include <stdio.h>

int main()
{
    int choice, a, b;

    printf("Enter 1 for addition!\n");
    printf("Enter 0 to exit!\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter any two number: ");
        scanf("%d %d", &a, &b);
        printf("The sum is %d", a + b);
        break;
    case 2:
        return 0;
    default:
        break;
    }
}