### Mar 5

## Pure Virtual Function

### 1. What is Pure Virtual Function?
It is also known as do nothing function. It is a virtual function that doesnot perform any task in program. It is used as placeholder and does not contain any function defination.

### Syntax

```cpp
virtual void className () = 0;
```

### Example

```cpp
#include <bits/stdc++.h>
using namespace std;

class Teacher {
    public:
        virtual void task() = 0;
};

class Student : public Teacher {
    void task() {
        cout << "student is learning....." << endl;
    }
};

int main() {
    Teacher *t1;
    Student st1;
    
    t1 = &st1;
    t1->task();

    return 0;
}
```

# Assignment

### 1. What is virtual function? Demonstrate an example of virtual function!
### 2. What is polymorphism in c++ ? write a program in c++ to calculate the area of a rectangle using pure virtial function.
### 3. Differentiate between virtual function and pure virtual function with suitable example.



