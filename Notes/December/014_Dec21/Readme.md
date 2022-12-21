### December 21

## Constructor and Destructor

Construtor and Destructor are special class member function in C++ where, classname and method names are same and for destructors we use the symbol (~) infornt of classname.

### Example

```cpp
class class_name {
    //private data members
    //public data members

    //Constructor 
    class_name(parameter_list(s)) {
        //constructor body
    }
};
```

#### 1. Example of Constructor 

```cpp
#include <iostream>
using namespace std;

class Student{
    public:
        int roll;

        // declaring constructor
        Student() {
            roll = 12;
        }
};

int main() {
        Student std;

        cout << "The roll number is = " << std.roll;
        
        return 0;
}
```
