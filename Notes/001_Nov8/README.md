### November 8, 2022


## Classwork

```c
//program to find the simple interest

#include <stdio.h>

int main() {
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
```

```c
//Simple program that uses switch statement

#include <stdio.h>

int main() {
    int choice, a, b;

    printf("Enter 1 for addition!\n");
    printf("Enter 0 to exit!\n");
    scanf("%d", &choice);

    switch (choice) {
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
```

```c
//Program that prints the multiplication table of any number

#include <stdio.h>

int main() {
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
```

```md
# output
> Enter any number: 3
> 3 x 1 = 3
> 3 x 2 = 6
> 3 x 3 = 9
> 3 x 4 = 12
> 3 x 5 = 15
> 3 x 6 = 18
> 3 x 7 = 21
> 3 x 8 = 24
> 3 x 9 = 27
> 3 x 10 = 30
```