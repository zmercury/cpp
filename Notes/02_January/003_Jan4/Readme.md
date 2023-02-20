### January 4

## 3-Dimensional Array

Arrangement of data elements or numbers in the form of rows and columns.

$$\begin{bmatrix}
 00 & 01 & 02 \\
 10 & 11 & 12 \\
 20 & 21 & 23
\end{bmatrix}$$

```cpp
// program that demonstrates how an array works
#include <iostream>
using namespace std;

int main() {
    int marks[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            marks[i][j] = (i + 1) * (j + 1);
            cout << marks[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
```

```cpp
// Program that takes input into a 2 dimensional array and prints it.

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

