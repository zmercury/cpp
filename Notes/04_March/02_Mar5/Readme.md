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

### 1. What is virtual function? Demonstrate an example of virtual function.
**Ans**: A virtual function is a member function which is declared within a base class and is re-defined (overridden) by a derived class.
#### Example
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

### 2. What is polymorphism in c++ ? write a program in c++ to calculate the area of a rectangle using pure virtial function.
**Ans:**Polymorphism in C++ is a programming concept that allows objects of different classes to be treated as if they are objects of the same class, enabling the same function or operator to behave differently for different objects. Polymorphism can be achieved through function overloading, operator overloading, and virtual functions.

```cpp
#include <iostream>

using namespace std;

class Shape {
  public:
    virtual float area() = 0; // Pure virtual function
};

class Rectangle : public Shape {
  private:
    float length;
    float width;
  public:
    Rectangle(float l, float w) {
      length = l;
      width = w;
    }
    float area() {
      return length * width;
    }
};

int main() {
    float m, n;
    cout << "Enter the length and breath of rectangle: ";
    cin >> m >> n;

    Rectangle r(m,n);
    Shape *shape = &r;

    cout << "Area of rectangle = " << shape->area() << "cm2"<< endl;
    
    return 0;
}
```

### 3. Differentiate between virtual function and pure virtual function with suitable example.

| Feature | Virtual Function | Pure Virtual Function |
| --- | --- | --- |
| Declaration | Declared with the `virtual` keyword | Declared with the `virtual` keyword and set to `= 0` |
| Definition | Can have a default implementation in the base class, which can be overridden in derived classes | Has no implementation in the base class and must be overridden in derived classes to provide a concrete implementation |
| Instantiation | Can be instantiated as an object of the base class | Cannot be instantiated as an object of the abstract base class, but can be instantiated as an object of a derived class that implements the pure virtual function |
| Abstract class | Can be used to create an abstract class, but not required | Must be used to create an abstract class |
| Inheritance | Can be inherited by derived classes, which can override the virtual function | Must be inherited by derived classes, which must override the pure virtual function |
| Syntax | `virtual return_type function_name(parameters) { ... }` | `virtual return_type function_name(parameters) = 0;` |

### Example of virtual function
```cpp

```

### Example of pure virtual function
```cpp

```




