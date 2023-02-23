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

#### 1. What do you mean by containership? Differentiate between inheritance and containership in c++?

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

```md
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
> I'm a student and learning!
> Enter teacher's name: Vijaya
> The roll number of student is 20
> The name of the teacher is: Vijaya
```
