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

## Homework

#### 1. What do you mean by Dynamic memory allocation? Explain how we can allocate dynamic memory in an array using new and delete operator in C++.
Dynamic memory allocation is the process of assigning the memory space during the execution time or the run time.
<br/> A dynamic array is quite similar to a regular array, but its size is modifiable during program runtime.


```cpp
// an example of dynamic memory allocation in c++ using an array

#include<iostream>
using namespace std;

int main() {
	int i, n;
    
	cout << "How many numbers will you type: ";
	cin >>n;

	int *arr = new int(n);

	cout << "Enter " << n << " numbers" << endl;
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << "You typed: ";
	for (i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	delete [] arr;
	return 0;
}
```

