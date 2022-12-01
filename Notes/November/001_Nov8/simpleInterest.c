// program to find the simple interest

#include <stdio.h>

int main()
{
    int p, t, r, si;
    printf("Enter the principle: ");
    scanf("%d", &p);
    printf("Enter the time: ");
    scanf("%d", &t);
    printf("Enter the rate: ");
    scanf("%d", &r);

    si = (p * t * r) / 100;

    printf("Simple Interest is %d", si);

    return 0;
}