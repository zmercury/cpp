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

### Dry run (Sum of all the elements of an array)

|marks[]|i=0 < 8 ++| sum = sum + marks[i] | sum|
|---|---|---|---|
|47|i = 0 (true)|sum = 0 + 47|47|
|34|i = 1 (true)|sum = 47 + 34|81|
|372|i = 2 (true)|sum = 81 + 372|453|
|62|i = 3 (true)|sum = 453 + 62|515|
|52|i = 4 (true)|sum = 515 + 52|567|
|42|i = 5 (true)|sum = 567 + 42|609|
|52|i = 6 (true)|sum = 609 + 52|661|
|62|i = 7 (true)|sum = 661 + 62|723|