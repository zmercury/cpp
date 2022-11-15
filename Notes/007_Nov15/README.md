### November 15, 2022


### 1. Find the greatest number among three number (using class)

```cpp
#include <iostream>

using namespace std;

class greatestNum {
    public:
        int numOne;
        int numTwo;
        int numThree;

        void getInput() {
            cout << "Enter any three number: ";
            cin >> numOne;
            cin >> numTwo;
            cin >> numThree;
        }

        void findGreatest() {
            if(numOne > numTwo) {
                if(numOne > numThree) {
                    cout << numOne << " is greater!" << endl;
                } else {
                    cout << numThree << " is greater!" << endl;
                }
            } else {
                if(numTwo > numThree) {
                    cout << numTwo << " is greater!" << endl;
                } else {
                    cout << numThree << " is greater!" << endl;
                }
            }
        }
};

int main() {
        greatestNum n1;
        n1.getInput();
        n1.findGreatest();

        return 0;
}
```

### 1.a. Using (Pass by Reference)
```cpp
#include <iostream>

using namespace std;

class greatestNum {
    public:
        void findGreatest(int &x,int &y,int &z) {
            if(x > y) {
                if(x > z) {
                    cout << x << " is greater!" << endl;
                } else {
                    cout << z << " is greater!" << endl;
                }
            } else {
                if(y > z) {
                    cout << y << " is greater!" << endl;
                } else {
                    cout << z << " is greater!" << endl;
                }
            }
        }
};

int main() {
        greatestNum n1;
        int numOne;
        int numTwo;
        int numThree;

        cout << "Enter any three number: ";
        cin >> numOne;
        cin >> numTwo;
        cin >> numThree;

        n1.findGreatest(numOne,numTwo,numThree);

        return 0;
}
```
