### December 19

## Reference Variable in C++

### Example


#### 1. Simple program that demonstrate the use of reference variable
```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 7;  //initially assigning the value of a
    int &ref = a; // making a new referece variable that stores the addr of a
    ref = 19; // chaning the value of reference variable 

    cout << "The value of a = " << a << endl; // printing out the value of a

    a = 45; // change the value of a 

    cout << "The value of reference = " << ref; // printing out the value of reference variable

    return 0;
}
```

#### 2. Swaping value using reference variable

```cpp
#include <iostream>
using namespace std;

void swap(int &first, int &sec) {
    int temp = first;
    first = sec;
    sec = temp;
}

int main() {
    int a = 23, b = 45;

    swap(a, b);

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    return 0;
}
```

### IMP
#### 1. What is refernce argument in C++? Write a program in c++ to swap numbers using reference arguments.  

In C++, we can create a reference of a variable which can change variables value and becomes an alternate name for an existing variable. <br>
Reference Variable can be declared with the symbol : & (Ampersand)

### Use if reference argument
1. We can change the parameter passed in the function
1. It helps to avoid copying large structures
1. It helps to increase the efficiency of the program 

### Homework

#### 1. Differenciate between Default Arguments and Reference Arguments

<table>
<tr><td><b>Default Argument</b></td><td><b>Reference Argument</b></td></tr>
<tr>
<td> A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the calling function doesn't provide a value for the argument </td>
<td> A reference parameter is a reference to a memory location of a variable </td>
</tr>
<tr>
<td></td>
<td></td>
</tr>
<tr>
<td>
Syntax:

```cpp
int sum(int x, int y, int z = 0, int w = 0){...}
```
</td>
<td>
Syntax:

```cpp
int &ref=a;
```
</td>
</tr>
</table>

#### 2. How default argument is differ from reference argument.




