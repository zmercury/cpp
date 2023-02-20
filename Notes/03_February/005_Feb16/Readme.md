### Feb 16

### 1. Write a program in c++ that find the greatest number among three numbers

```cpp
#include <iostream>
using namespace std;

class largeNum { 
    public:
        int numberOne, numberTwo, numberThree;

        void getNumber() {
            cout << "Enter any three number: ";
            cin >> numberOne >> numberTwo >> numberThree;
        }

        void findLargerNumber() {
            if(numberOne > numberTwo) {
                if(numberOne > numberThree) {
                    cout << numberOne << " is the greatest number!";
                } else {
                    cout << numberThree << " is the greatest number!";
                }
            } else {
                if(numberTwo > numberThree) {
                    cout << numberTwo << " is the greatest number!";
                } else {
                    cout << numberThree << " is the greatest number!";
                }
            }
        }
};

int main() {
    largeNum lrg;

    lrg.getNumber();
    lrg.findLargerNumber();
    
    return 0;
}
```


### 2. Write a program in C++ to find the sum of all the odd numbers from 1 to 100..

```cpp

```