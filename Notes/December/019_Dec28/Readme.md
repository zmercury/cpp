### December 28

## Copy Constructor

Defines and initializes the object from another object

### Types
1. User-defined
2. Built-in

#### Syntax for User-defined Copy Constructor

```cpp
class_name(const class_name &obj) {
    //body
}
```

#### Example

```cpp
#include <iostream>
using namespace std;

class calc{
    public: 
        int a,b;

        calc(int x, int y) {
            a = x;
            b = y;
        }

        calc(const calc &m) {
            a = m.a;
            b = m.b;
        }

        void display() {
            cout << "The sum is " << a + b << endl;
        }
};

int main() {
    calc c1(79, 82);
    calc c2(c1);

    c1.display();
    c2.display();

    return 0;    
}
```


