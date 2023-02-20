### December 13

<!-- ![Image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Implicit-Type-Conversion-in-c.png) -->

<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/Implicit-Type-Conversion-in-c.png" alt="Image" width="500px" height="auto" align="right" />

## Type of type conversion

### 1. Implicit (Automatic Type Conversion)
    Narrowing/ Widening
### 2. Explicit (Type Casting)

#### Widening
```cpp
int int_value = 5;
double double_value = int_value;
cout << double_value;
```

#### Narrowing
```cpp
double double_value = 27.37;
int int_value = double_value;
cout << int_value;
```

#### A) C - Style
```cpp
int val = (int)double_value;
```

#### B) Function - Style
```cpp
int val = int(double_value);
```

### Examples

#### Implicit

#### A. 

```cpp
#include <iostream>
using namespace std;

int main() {
    double num_double = 56.76;
    int num_int = num_double;

    cout << "The value of int is " << num_int<< endl;

    return 0;
}
```

#### B. 

```cpp
#include <iostream>
using namespace std;

int main() {
    int num_int = 45;
    double num_double = num_int;

    cout << "The number of double is " << num_double;

    return 0;
}
```

#### C. 

```cpp
#include <iostream>
using namespace std;

int main() {
    double num_double = 56.76;
    
    //c style
    int num_int = (int)num_double;

    //function notation
    num_int = int(num_double);

    cout << "The given double value is " << num_double << endl;
    cout << "C Style integer type casting = " << num_int << endl;
    cout << "Integer Type Casting using function notation is = " << num_int;

    return 0;
}
```





