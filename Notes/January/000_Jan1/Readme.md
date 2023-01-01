### January 1

## Array

#### Array ---> Homogenious Data types

### 1. A simple program that shows how to access single elements and all the elements in an array.

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

### 2. Program that finds the sum of all the elements in an array using for loop

```cpp
// Find the sum of all the elements of an array

#include <iostream>
using namespace std;

int main() {
    int marks[] = {47,34,372,62,52,42,52,62};
    int sum = 0;

    // sum of all the elements in array
    for(int i=0; i < 8; i++) {
        sum += marks[i];
    }

    cout << "The sum of all elements is " << sum;

    return 0;
}
```
