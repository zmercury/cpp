### December 16

## Inline Function

Inline function is an advance feature in C++ that improves the speed and execuition time of the program. When a function call is detected its memory address is stored by the compiler and copied onto the stack after the code execute control is transfer to the calling statement.

#### Syntax
```cpp
inline return_type function _name "parameter" {
    function body;
}
```

### Function Overloading and function overriding 
Both are completely different concepts in programming 

#### Overloading function 

1. By using different data types
```cpp
calc(int a, int b) {

}
```
```cpp
calc(float a, float b) {

}
```
2. By using different number of parameter
```cpp
calc(int a, int b) {

}
```
```cpp
calc(int a, int b, int c) {

}
```
3. By using different sequence of parameter
```cpp
calc(int a, float b) {

}
```
```cpp
calc(float a, int b) {

}
```

### Example

```cpp
//Function overloading with different data types

#include <iostream>
using namespace std;

int add(int a, int b) {
    cout << "The sum is ";
    return a+b;
}

float add(float a, float b) {
    cout << "The sum is";
    return a+b;
}

//driver / main method

int main() {
    int a = 5, b = 6;

    cout << add(a,b) << endl;
    float c = 6.67, d = 89.88;
    cout << add(c,d) << endl;

    return 0;
}
```

```cpp
//

#include <iostream>
using namespace std;

class calc{
    public:
        inline int add(int a, int b) {
            return (a+b);
        }
};

int main() {
    calc c1;

    int m=6,n-5;

    cout << "The sum = " << c1.add(m,n) << endl;

    return 0;
}
```
