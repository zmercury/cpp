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

### Important Question for Exam

#### 1. Write a program in C++ to display mobile name and its cost with tax using single inheritance 

```cpp
#include <iostream>
using namespace std;

class Mobile {
    public:
        char m_name[25] = "Samsung S23 Ultra";
        int m_cost = 209999;

};

class Samsung: public Mobile {
    public:
        int Tax = 0.13 * m_cost;
        void totalCost () {
            cout << "Total cost after tax = Rs. " << (m_cost - Tax);
        }
};

int main() {
    Samsung sng;

    cout << "Model = " << sng.m_name << endl;    
    cout << "Cost = Rs. " << sng.m_cost << endl;

    sng.totalCost();

    return 0;
}
```