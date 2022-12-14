#### December 14

## Dynamic Memory Allocation

In C++, it allows us to allocate memory for a variable or for an array at runtime. This is called Dynamic Memory Allocation. <br/>
In this case, we use new and delete operator. <br/> Dynamic Memory Allocation can make memory management more efficient. <br/>
For arrays, It is efficient when the time of runtime in which we dont know the size of the array until execuition. 

### New Operator

This operator specifies a memory allocation. If there is sufficient memeory for a new operator, initializes the memory and returns the newly allocated and initialized memory address for the pointer variable. 

#### Syntax

```cpp
pointer_variable = new data_type;
```

### Delete Operator

The programmer must release the dynamically allocated memory after program execuition. The delete operator is responsible for freeing dynamically allocated memory. 

#### Syntax

```cpp
delete pointer_variable;
```

#### Examples

```cpp
#include <iostream>
using namespace std;

int main() {
    // initializing integer pointer
    int *pointerInt;

    // initializing float pointer
    float *pointerFloat;

    // allocating dynamic memory
    pointerInt = new int;
    pointerFloat = new float;

    //assigning value
    *pointerInt = 55;
    *pointerFloat = 67.89f;

    // printing the value
    cout << "Integer Value = " << *pointerInt << endl;
    cout << "Float Value = " << *pointerFloat;

    // freeing memory allocation
    delete pointerInt;
    delete pointerFloat;

    return 0;
}
```

