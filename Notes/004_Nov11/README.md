### November 11, 2022

Classwork


```cpp
class className {
    //data member(s) and member function(s)
};
```
 

```cpp
#include <iostream>

using namespace std;

class student {
    public:
        string name = "Ram";
};

int main() {
        student s1;
        cout << s1.name;
        return 0;
}
```

```cpp
#include <iostream>

using namespace std;

class sum {
    int a, b;
    public:
        void enterNumber() {
            cout << "Enter any two numbers: ";
            cin >> a;
            cin >> b;
        }
        void displaySum() {
            cout << "The sum is " << a + b << endl;
        }
};

int main() {
        sum s1;
        s1.enterNumber();
        s1.displaySum();

        return 0;
}
```