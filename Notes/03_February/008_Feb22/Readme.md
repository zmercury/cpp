### Feb 22

## Function Overriding


### 1. Program that demonstrates Function Overriding
```cpp
#include <iostream>
using namespace std;

class Dad
{
public:
    void hello()
    {
        cout << "Hello child !" << endl;
    }
};

class Child : public Dad
{
public:
    void hello()
    {
        cout << "Hello cutie pie !!" << endl;
        Dad::hello();
    }
};

int main()
{
    Child c1;
    c1.hello();
    return 0;
}
```

## Assignment

### 1. Write a cpp program to access overridden function by using pointer of sub type which points an object of a super class.

```cpp

```






