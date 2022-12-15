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
			return (a + b;)
		}
};

int main() {
		calc cl;
		int m = 10, n = 20;

		cout << "The sum is " << cl.add(m, n);

		return 0;
}
```