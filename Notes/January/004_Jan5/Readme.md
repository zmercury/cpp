### January 5

## 2d Multi-IO (Input/Output)

### 1. Program that takes input in 2D array in prints it in the console.

```cpp
#include <iostream>
using namespace std;

int main() {
    int nums[3][5];

    cout << "Enter 2D array elements" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Enter number in " << "[" << i << "]" << "[" << j << "]: " ;
            cin >> nums[i][j];
        }
    }

    cout << "Displaying 2D array elements: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }

        return 0;
}
```



