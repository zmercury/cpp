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

### Multiple Inheritance

```cpp
#include <iostream>
using namespace std;

class firstClass {
    public:
        int a;
};

class secondClass {
    public:
        int b;
};

class mainClass: public firstClass, public secondClass {
    public:
        int c;

        void display() {
            cout << a << " " << b << " " << c << endl;
        }
};

int main() {
    mainClass a1;

    a1.a = 10;
    a1.b = 20;
    a1.c = 30;

    a1.display();

    return 0;
}
```

### Multilevel Inheritance

```cpp
#include <iostream>
using namespace std;

class sonClass {
    public:
        int a;
};

class fatherClass: public sonClass {
    public:
        int b;
};

class grandfatherClass: public fatherClass{
    public:
        int c;

        void display() {
            cout << a << " " << b << " " << c << endl;
        }
};

int main() {
    grandfatherClass a1;

    a1.a = 10;
    a1.b = 20;
    a1.c = 30;

    a1.display();

    return 0;
}
```