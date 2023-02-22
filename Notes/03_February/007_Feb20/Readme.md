### Feb 20

## What is Ambiguity?
It is a situation in which something has more one possible meaning and may therefore cause confussion. <br>
In case of multiple inheritance, a single class is derived form two or more parents classes so there maybe possibily that two or more parents have a member functions with same name. <br>
If the object of derived class needs to access one of the same named member function from the base class then it results ambiguity in our program. This program can be fixed by using scope resolution operator (::) during the time of function call.

### 1. Problem that demonstrated (Ambiguity)

```cpp
#include <iostream>
using namespace std;

class Dad
{
public:
    void hello()
    {
        cout << "Hello child !" << endl;
    }
};

class Child : public Dad
{
public:
    void hello()
    {
        cout << "Hello cutie pie !!" << endl;
    }
};

int main()
{
    Child c1;
    c1.hello();
    c1.Dad::hello();
    return 0;
}
```

### 2. How to solve the Ambiguity

```cpp
#include <bits/stdc++.h>
using namespace std;

class salary{
    public:
        int salaryAmount;
        
        void getAmount() {
            cout << "Enter your salary: ";
            cin >> salaryAmount;
        }
};

class bonus{
    public:
        int bonusAmount;

        void getAmount() {
            cout << "Enter the bonus amount: ";
            cin >> bonusAmount;
        }
};

class employee: public salary, public bonus {
    public:
        void totalSalary() {
            salary::getAmount();
            bonus::getAmount();
            cout << "Total Salary is Rs. " << salaryAmount + bonusAmount;
        }
};

int main() {
    employee emp;

    emp.totalSalary();

    return 0;
}
```