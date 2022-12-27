### December 27

### 1. What is Destructor? 
Destructor is just opposite of Constructor. A Destructor is called by the compiler when the object is destoryed and its main function is to de-allocate the memory of the object. 

#### Syntax

```cpp
class class_name {
    //constructor
    class_name() { }
        // Destructor
    ~class_name() {
        // Destructor body
    }
};
``` 

#### Example

```cpp
// Example of Destructor

#include <iostream>
using namespace std;

class className {
    public:
        className() {
            cout << "Constructor called!" << endl;
        }
        ~className() {
            cout << "Destructor called!" << endl;
        }
};

int main() {
    className obj;
    int a = 1;
    
    if(a == 1) {
        className obj2;
    }

    return 0;
}
```

Destructor has same name as class name with prefix (~) Tilde operator. Destructor takes no argument and have no return type. Destructor cannot be overloaded.

## Question

### 1. Explain the concept of Constructor and Destructor with syntax and example.
### 2. Differenciate between Constructor and Destructor.
### 3. Which of the following is the way to access Constructor if classname is Student.
- [ ]   () Student {}
- [ ] Student {}
- [x] Student () {} 
- [ ] student () {}

### 4. Which of the following is the way to call Destructor.

## Homework

### 5. How constructor and destructor are called when the object is created and destoryed.