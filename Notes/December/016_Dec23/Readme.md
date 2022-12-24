### December 23

```cpp
#include <iostream>
using namespace std;

int sum(int a, int b) {
    int add;

    add = a + b;

    cout << "The sum of a and b is " << add;

    return 0;
}

int main() {
    int numOne, numTwo;

    cout << "Enter number one: ";
    cin >> numOne;

    cout << "Enter number two: ";
    cin >> numTwo;

    sum(numOne, numTwo);

    return 0;
}
```

