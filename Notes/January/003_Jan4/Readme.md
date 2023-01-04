### January 4

## 3-Dimensional Array

```cpp
// Program that takes input into a 3 dimensional array and prints it.

#include <iostream>
using namespace std;

int main() {
    int a[3][3];
    int i, j;

    cout << "Enter the data of 3 dimensional array: " << endl;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << "Enter the " << i << " " << j << " element: ";
            cin >> a[i][j];
        }
    }

    cout << "Array inputed: " << endl;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```

