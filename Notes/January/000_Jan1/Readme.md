### January 1

## Array

#### Array ---> Homogenious Data types

### A simple program that shows how to access single elements and all the elements in an array.

```cpp
// How to access a declared array in c++

#include <iostream>
using namespace std;

int main() {
    int marks[] = {47,34,372,62,52,42,52,62};

    //accessing single element
    cout << marks[3] << endl;           //47

    //accessing all elements
    for(int i=0; i < 8; i++) {
        cout << marks[i] << " ";
    }

    return 0;
}
```

