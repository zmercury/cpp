# Assignment

### Dec 14
#### 1. What do you mean by Dynamic memory allocation? Explain how we can allocate dynamic memory in an array using new and delete operator in C++.
 Dynamic memory allocation is the process of assigning the memory space during the execution time or the run time.
<br/> 
* A dynamic array is quite similar to a regular array, but its size is modifiable during program runtime.


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

### Dec 15

#### 1. What do you mean by operator? Explain bitwise operators in detail with proper explanations and examples of each.
<img style="width: 450px; height: auto;" align="right" src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/Operators-In-C.png" />

* An Operator is a character that represents a specific mathematical or logical action or process.

### Bitwise Operator


* Those operators that performs operations on integer data at the individual bit-level are called bitwise operators.

### List of 6 bitwise operators included in C++

|Operator|Description|
|:-:|---|
|&|Bitwise AND Operator|
|&#124;|Bitwise OR Operator|
|^|Bitwise XOR Operator|
|~|	Bitwise Complement Operator|
|<<|Bitwise Shift Left Operator|
|>>|Bitwise Shift Right Operator|