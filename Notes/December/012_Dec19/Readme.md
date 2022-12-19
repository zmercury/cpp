### December 19

## Reference Variable in C++

### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 7;  //initially assigning the value of a
    int &ref = a; // making a new referece variable that stores the addr of a
    ref = 19; // chaning the value of reference variable 

    cout << "The value of a = " << a << endl; // printing out the value of a

    a = 45; // change the value of a 

    cout << "The value of reference = " << ref; // printing out the value of reference variable

    return 0;
}
```