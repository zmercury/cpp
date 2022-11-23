### November 23

Switch Case Statement
-

#### 1. Display days using switch (User Input)

```cpp
#include <iostream>

using namespace std;

int main() {
    int inp;

    cout << "Enter any number from 1 - 7: ";
    cin >> inp;

    switch(inp) {
        case 1: {
            cout << "Sunday";
            break;
        }
        case 2: {
            cout << "Monday";
            break;
        }
        case 3: {
            cout << "Tuesday";
            break;
        }
        case 4: {
            cout << "Wednesday";
            break;
        }
        case 5: {
            cout << "Thursday";
            break;
        }
        case 6: {
            cout << "Friday";
            break;
        }
        case 7: {
            cout << "Saturday";
            break;
        }
        default: {
            cout << "Invalid Input!";
            break;
        }
    }
    return 0;
}
```