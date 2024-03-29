### Feb 22

## Function Overriding


### 1. Program that demonstrates Function Overriding
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
        Dad::hello();
    }
};

int main()
{
    Child c1;
    c1.hello();
    return 0;
}
```

## Assignment

### 1. Write a cpp program to access overridden function by using pointer of sub type which points an object of a super class.

```cpp

```

### 2. Write a program in cpp to show how to call parametarized constructor of child class when parent class constructor is called

```cpp
#include <iostream>
using namespace std;

class Dad {
public:
    Dad(int x) {
        cout << "Dad constructor called with x = " << x << endl;
    }
};

class Child : public Dad {
public:
    Child(int x, int y) : Dad(x) {
        cout << "Child constructor called with y = " << y << endl;
    }
};

int main() {
    Child obj(1, 2); 
    return 0;
}

```


## Execution Sequence of Constructor and Destructor in Inheritance


### 1. Program that shows the behavior of Constructor and Destructor in Multiple Inheritance

```cpp
#include <bits/stdc++.h>
using namespace std;

class grandDad{
    public:
        grandDad() {
            cout << "Calling default constructor of grandDad class" << endl;
        }

        ~grandDad() {
            cout << "Calling destructor of grandDad class" << endl;
        }
};

class Dad {
    public:
        Dad() {
            cout << "Calling default constructor of Dad class" << endl;
        }

        ~Dad() {
            cout << "Calling destructor of Dad class" << endl;
        }
};

class Child: public grandDad, public Dad {
    public:
        Child() {
            cout << "Calling default constructor of Child class" << endl;
        }

        ~Child() {
            cout << "Calling destructor of Child class" << endl;
        }
};

int main() {
    Child a;
    return 0;
}
```

### 2. Program that shows the behavior of Constructor and Destructor in Single Inheritance

```cpp
#include <bits/stdc++.h>
using namespace std;

class Dad{
    public:
        Dad() {
            cout << "Calling default constructor of Dad class" << endl;
        }

        ~Dad() {
            cout << "Calling destructor of Dad class" << endl;
        }
};

class Child: public Dad {
    public:
        Child() {
            cout << "Calling default constructor of Child class" << endl;
        }

        ~Child() {
            cout << "Calling destructor of Child class" << endl;
        }
};

int main() {
    Child a;
    return 0;
}
```

### 3. Program that shows the behavior of Constructor and Destructor in Multilevel Inheritance

```cpp
#include <bits/stdc++.h>
using namespace std;

class grandDad{
    public:
        grandDad() {
            cout << "Calling default constructor of grandDad class" << endl;
        }

        ~grandDad() {
            cout << "Calling destructor of grandDad class" << endl;
        }
};

class Dad: public grandDad {
    public:
        Dad() {
            cout << "Calling default constructor of Dad class" << endl;
        }

        ~Dad() {
            cout << "Calling destructor of Dad class" << endl;
        }
};

class Child: public Dad {
    public:
        Child() {
            cout << "Calling default constructor of Child class" << endl;
        }

        ~Child() {
            cout << "Calling destructor of Child class" << endl;
        }
};

int main() {
    Child a;
    return 0;
}
```

### 4. Program that shows the behavior of Constructor and Destructor in Hierarchical Inheritance