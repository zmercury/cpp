### December 17

## Overloaded Function 

####  1. by using different number of parameters

```cpp
#include <iostream>
using namespace std;

class Addition{
    public:
        void add(int a, int b) {
            cout << "The sum = " << (a + b) << endl;
        }
        void add(int a, int b, int c) {
            cout << "The sum = " << (a + b + c) << endl;
        }
};

int main() {
        Addition ad;

        ad.add(10, 29);
        ad.add(20, 30, 59);

        return 0;
}
```

#### by using different sequence of parameters

```cpp
#include <iostream>
using namespace std;

class Addition{
    public:
        void add(int a, double b) {
            cout << "The sum = " << (a + b) << endl;
        }
        void add(double a, int b) {
            cout << "The sum = " << (a + b) << endl;
        }
};

int main() {
        Addition ad;

        ad.add(10, 29.32);
        ad.add(20.23, 30);

        return 0;
}
```

## Default Arguments

```cpp
void add(int a, double b) {};

cout << add(); //No Parameter
cout << add(5); //Single Parameter
cout << add(5, 2.3); //Dual Parameter with correct Data types
cout << add(3.5, 3); //Dual Parameter with incorrect Data types
```

### Example

#### 1. Use of default argument in C++

```cpp
#include <iostream>
using namespace std;

int sum(int a, int b, int c = 0, int d = 0) {
    return (a + b + c + d);
}

int main() {
    cout << sum(12, 34) << endl;
    cout << sum(12, 34, 24) << endl;
    cout << sum(12, 34, 12, 42);

    return 0;
}
```