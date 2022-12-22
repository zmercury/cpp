### December 22

## Type of Contructor

1. Default
1. Parameterized
1. Copy

### 1. Default Constructor

Default Constructor is also known as zero argument constructor, as it doesn't take any parameter. It can be defined by the user if not, then the compiler creates it on its own.

#### Syntax
```cpp
class_name{
//body 
}
```

#### Example

```cpp
#include <iostream>
using namespace std;

class student{
        int roll;
        string name;

        public:
                student();
                void display();
};

student::student() {
                cout << "Enter the roll no: ";
                cin >> roll;

                cout << "Enter the name: ";
                cin >> name;
}

void student::display() {
                cout << "Roll no = " << roll << endl;
                cout << "Name = " << name;
}

int main() {
    student std;
    std.display();

    return 0;
}
```
