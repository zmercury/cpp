### December 20

#### Returning by reference

```cpp
#include <iostream>
using namespace std;

int num; // global variable

int &test(); // reference function declaration

int main()
{
    test() = 57; // its like num = 57;
    cout << "num = " << num;
    return 0;
}

int &test()
{
    // returns the address of num variable
    return num;
}
```

```cpp
#include <iostream>
using namespace std;

// Function to return as return by reference
int &retByRef(int &n)
{
    // print the address
    cout << "n = " << n << endl;
    cout << "The address of n is - " << &n << endl;

    // return by reference
    return n;
}

int main()
{

    int a = 20;
    int &b = retByRef(a);

    // display 'a' and its address
    cout << "a = " << a << endl;
    cout << "The address of a is - " << &a << endl;

    // display 'b' and its address
    cout << "b = " << b << endl;
    cout << "The address of b is - " << &b << endl;

    // update the value of 'a'
    retByRef(a) = 25;

    // display 'a' and its address
    cout << "a = " << a << endl;
    cout << "The address of a is - " << &a << endl;

    return 0;
}
```