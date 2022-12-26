### December 26

## Parameterized Constructor

### Syntax

```cpp

```

#### Example

```cpp
#include <iostream>
using namespace std;

class Num{
    public:
        int value;
        Num(int a) {
            value = a;
        }
};

int main() {
        Num a1(45);
        cout << "The value is = " << a1.value << endl;

        return 0;
}
```

#### Example Two

```cpp
// Multiple Object with Parameters 

#include <iostream>
using namespace std;

class Num{
    public:
        int value;
        Num(int a) {
            value = a;
        }
};

int main() {
        Num a1(45);
        Num a2(4);
        Num a3(5);
        Num a4(245);
        cout << "The value is = " << a1.value << endl;
        cout << "The value is = " << a2.value << endl;
        cout << "The value is = " << a3.value << endl;
        cout << "The value is = " << a4.value << endl;

        return 0;
}
```

#### Example Three

```cpp
//Use of multiple parameter s

#include <iostream>
using namespace std;

class Student{
    string name;
    int roll;

    public:
        Student(string stu_name) {
            name = stu_name;
            roll = 12;
        }

        Student(int stu_roll) {
            name = "Sita";
            roll = stu_roll;
        }

        Student(string stu_name, int stu_roll) {
            name = stu_name;
            roll = stu_roll;
        }

        void display() {
            cout << "Name = " << name << endl;
            cout << "Roll no. = " << roll << endl;
        }
};

int main() {
        Student s1("Mercury");
        Student s2(17);
        Student s3("Nikhil",18);

        s1.display();
        s2.display();
        s3.display();

        return 0;
}
```
---

### Important Question

#### 1. What is Constructor? Differenciate default constructor and parameterized constructor. 