### Feb 15

### 1. Write a program to display pass or fail and input roll number, marks using multilevel inheritance.

```cpp
#include <iostream>
using namespace std;

class student {
    public:
        int r;

        void inputRoll() {
            cout << "Enter your roll number: ";
            cin >> r;
        }
};

class exam: public student {
    public:
        int m;

        void inputMarks() {
            inputRoll();
            cout << "Enter the marks in Computer Science: ";
            cin >> m;
        }
};

class result: public exam {
    public:
        void displayResult() {
            inputMarks();
            if(m >= 40) {
                cout << "You are pass!";
            } else {
                cout << "You are fail!";
            }
        }
};

int main() {
    result r1;
    
    r1.displayResult();

    return 0;
}
```


```cpp
# output

> Enter your roll number: 21
> Enter the marks in Computer Science: 55
> You are pass!
```