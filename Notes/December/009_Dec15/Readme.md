### December 15

```cpp
//Program that uses bitwise and

#include <iostream>
using namespace std;

int main() {
	int a = 60;
	int b = 13, c;

	c = a & b;

	cout << "The value of c is " << c;

	return 0;
}
```

```cpp
// Program that uses return type

#include <iostream>
using namespace std;

class calc{
	public:
		int add(int a, int b) {
			return (a + b);
		}
};

int main() {
		calc cl;
		int m = 10, n = 20;

		cout << "The sum is " << cl.add(m, n);

		return 0;
}
```

## Homework

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