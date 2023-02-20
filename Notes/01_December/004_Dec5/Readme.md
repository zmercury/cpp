### December 5

## Class & Object

#### Syntax of Class
```cpp
Access_Modifier class className {
    //data member(s)
    //member function(s)
}
```
```cpp
// Example

class number {
    public:
        int a;
        void getInput() {
            cout << "Enter any number: ";
            cin >> a;
        }
}
```

#### Syntax of Object
```cpp
className obj;
```

```cpp
//Example

number n1;
```

### Types of Variable 

#### 1. Local
#### 2. Static
#### 3. Instance

```cpp
class Student {
    int age;

    void input() {
        cout << "Enter age: ";
        cin >> age;
    }
};

class Student {
    int age;
    void Input();
}

Student::input {
        cout << "Enter age: ";
        cin >> age;
}
```

### Scope resolution operator 

```cpp
//example

#include <iostream>
using namespace std;

class evenOdd {
        int number;
    public:
        int getInput();
        int findEvenOdd();
};

int evenOdd::getInput() {
        cout << "Enter any number: ";
        cin >> number;
        return 0;
}

int evenOdd::findEvenOdd() {
    if(number % 2 == 0) {
        cout << "Even";
    } else {
        cout << "Odd";
    }
    return 0;
}

int main() {
    evenOdd eo;

    eo.getInput();
    eo.findEvenOdd();

    return 0;
}
```

### Insertion and Extraction Opetator

```cpp
//example

cout << "Enter age: ";
cin >> age;
```

|Insertion Operator (Output)|Extraction Operator (Input)|
|:-:|:-:|
|<<|>>|





