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

* An Operator is a character that represents a specific mathematical or logical action or process.

### Bitwise Operator


* Those operators that performs operations on integer data at the individual bit-level are called bitwise operators.

### List of 6 bitwise operators included in C++
<img style="width: 450px; height: auto;" align="right" src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/Operators-In-C.png" />

|Operator|Description|
|:-:|---|
|&|Bitwise AND Operator|
|&#124;|Bitwise OR Operator|
|^|Bitwise XOR Operator|
|~|	Bitwise Complement Operator|
|<<|Bitwise Shift Left Operator|
|>>|Bitwise Shift Right Operator|

