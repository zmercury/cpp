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


#### 1. The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1.  
#### 2. The | (bitwise OR) in C or C++ takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1. 
#### 3. The ^ (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different. 
#### 4. The ~ (bitwise NOT) in C or C++ takes one number and inverts all bits of it. 
#### 5. The << (left shift) in C or C++ takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift. 
#### 6. The >> (right shift) in C or C++ takes two numbers, right shifts the bits of the first operand, the second operand decides the number of places to shift. 

### Example

```cpp
#include <iostream>
using namespace std;
 
int main() {
      // a = 5(00000101), b = 9(00001001)
    int a = 5, b = 9;
 
    // The result is 00000001
    cout<<"a = " << a <<","<< " b = " << b <<endl;
    cout << "a & b = " << (a & b) << endl;
 
    // The result is 00001101
    cout << "a | b = " << (a | b) << endl;
 
    // The result is 00001100
    cout << "a ^ b = " << (a ^ b) << endl;
 
    // The result is 11111010
    cout << "~a = " << (~a) << endl;
 
    // The result is 00010010
    cout<<"b << 1" <<" = "<< (b << 1) <<endl;
 
    // The result is 00000100
    cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;
 
    return 0;
}
```

#### Output

```md
> a = 5, b = 9
> a & b = 1
> a | b = 13
> a ^ b = 12
> ~a = -6
> b << 1 = 18
> b >> 1 = 4
```