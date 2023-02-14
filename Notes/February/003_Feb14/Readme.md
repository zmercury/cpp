### Feb 14

### 1. Write a program to add two numbers using inheritance.

```cpp
#include <iostream>
using namespace std;

class A {
    public: 
        int x;
         
        void getX() {
            cout << "Enter the value of X: ";
            cin >> x;
        }        
};

class B {
    public:
        int y;

        void getY() {
            cout << "Enter the value of Y: ";
            cin >> y;
        }
};

class C: public A, public B {
    int sum;
    public:

        void add() {
            getX();
            getY();
            sum = x+y;
            cout << "Sum = " << sum;
        }
};

int main() {
    C c1;

    c1.add();

    return 0;
}
```

```md
# Output

> Enter the value of X: 10
> Enter the value of Y: 20
> Sum = 30
```