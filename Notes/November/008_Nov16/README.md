### November 16, 2022

#### ASCII

> American Standard Code for Information Interchange 

```c
//for loop

for(initialization; condition; increment/decrement) {
    //statement;
}
```


### 1. Using increment operator to find even number

```c
#include <stdio.h>

int main()
{
    for (int i = 2; i <= 10; i += 2)
    {
        printf("%d\t", i);
    }

    return 0;
}
```
#### Output
```md
> 2 4 6 8 10
```


