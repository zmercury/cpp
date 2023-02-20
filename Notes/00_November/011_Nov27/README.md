### November 27

Classwork
-

```cpp
#include <iostream>
using namespace std;

class evenOdd {
    public:
        int num;

        void getNumber() {
            cin >> num;
            cout << "Enter a number: ";    
        }

        void findEvenOdd() {
            if(num == 0) {
                cout << "Zero";
            } else if(num < 0) {
                cout << "Number is Negative!";
            } else {
                cout << "Number is Positive!";
            }
        }
};

int main() {
        evenOdd eo;

        eo.getNumber();
        eo.findEvenOdd();

        return 0;
}
```


```cpp
#include <iostream>
using namespace std;

class reverseNum {
    public:
        int numOne, numTwo, temp;

        void getNumber() {
            cout << "Enter two number: ";    
            cin >> numOne;
            cin >> numTwo;
        }

        void numberSwap() {
            temp = numOne;
            numOne = numTwo;
            numTwo = temp;
            cout << numOne << " " << numTwo;
        }
};

int main() {
        reverseNum no;

        no.getNumber();
        no.numberSwap();

        return 0;
}
```


```cpp
#include <iostream>
using namespace std;

int main() {
        int numOne, numTwo, temp;

        cout << "Enter two number: ";    
        cin >> numOne;
        cin >> numTwo;

        temp = numOne;
        numOne = numTwo;
        numTwo = temp;
        
        cout << numOne << " " << numTwo;

        return 0;
}
```