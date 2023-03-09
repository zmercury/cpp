### Feb 23

## Containership / Nesting 

If a class contains object or members of another class 

### 1. What is Containership?
Containership / Nesting - When a class contains object or members from another class.This kind of relationship is called containership or nesting <br>
Container Class - The class which holds object of another class as its member is called container class. <br>

### Syntax:

```cpp
class classNameOne {
    --------------------
    --------------------
    --------------------
};

class classNameTwo {
    classNameOne cOne; // object of classNameOne 
    --------------------
    --------------------
};
```

### Assignment

#### 1. What do you mean by containership? 
**Ans:** In C++, a container is a data structure that is used to store and organize data. A container can hold objects of any type, including built-in types, user-defined types, and pointers.

A containership relationship in C++ is a type of relationship between two classes where one class (the container class) contains one or more instances of another class (the contained class). The contained class objects are stored inside the container class objects.

#### Example
```cpp
#include <iostream>
using namespace std;

class Rectangle {
public:
    int width;
    int height;
};

class Square {
public:
    int side;
    Rectangle rect;
};

int main() {
    Square square;
    square.side = 5;
    square.rect.width = square.side;
    square.rect.height = square.side;

    cout << "Square side: " << square.side << endl;
    cout << "Rectangle width: " << square.rect.width << endl;
    cout << "Rectangle height: " << square.rect.height << endl;

    return 0;
}
```


**Explaination**: In this example, we have two classes *Rectangle* and *Square*. The *Square* class is a container class that contains an instance of the *Rectangle* class. The *Rectangle* class is the contained class.

We create a *Square* object named *square* and set *its side* member variable to 5. We then set *the width* and *height* member variables of the *Rectangle* object contained within *square* to the same value as *side*.

Finally, we print out the values of the *side*, *width*, and *height* member variables to the console.


#### 1. Differentiate between inheritance and containership in c++?
|Inheritance|Containership|
|---|---|
|It enables a class to inherit data and functions from a base class|It enables a class to contain objects of different classes as its data member.|
|The derived class may override the functionality of the base class.|The container class can’t override the functionality of the contained class.|
The derived class may add data or functions to the base class.|The container class can’t add anything to the contained class.|
|Inheritance represents a “is-a” relationship.|Containership represents a “has-a” relationship.|

### Example

#### 1. Program that demonstrates the usage of containership 

```cpp
#include <bits/stdc++.h>
using namespace std;

class Teacher {
    public:
        void output() {
            cout << "Hello! I am a teacher!" << endl;
        }
};

class Student {
    Teacher t1;
    public:
        void result() {
            cout << "I'm a student and learning!" << endl;
            t1.output();
        }
};

int main() {
    Student sd;
    sd.result();
    return 0;
}
``` 

```
# Output
> I'm a student and learning!
> Hello! I am a teacher!
```

#### 2. Program that demonstrates the usage of containership 

```cpp
#include <bits/stdc++.h>
using namespace std;

class Teacher {
    public:
        char name[25];
        void getName() {
            cout << "Enter teacher's name: ";
            cin >> name;
        }

        void display() {
            cout << "The name of the teacher is: " << name << endl;
        }
};

class Student {
    Teacher t1;
    int roll;
    public:
        void getRoll() {
            cout << "Enter the roll number of student: ";
            cin >> roll;
            t1.getName();
        }

        void display() {
            cout << "The roll number of student is " << roll << endl;
            t1.display();
        }
};

int main() {
    Student sd;
    sd.getRoll();
    sd.display();
    return 0;
}
```

```md
# Output
> Enter the roll number of student: 20
> Enter teacher's name: Bijaya
> The roll number of student is 20
> The name of the teacher is: Bijaya
```
