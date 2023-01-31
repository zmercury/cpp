### January 31

```cpp
#include <iostream>
using namespace std;

class BaseClass {
    public:
        int a;

        void show() {
            cout << a << endl;
        }
};

class DerivedClass: public BaseClass {
    public:
        int b;
        
        void display() {
            cout << a << " " << b << endl;
        }
};

int main() {
    BaseClass b1;
    DerivedClass d1;

    b1.a = 57;
    b1.show();

    d1.a = 13;
    d1.b = 20;

    d1.show();
    d1.display();

    return 0;
}
```
