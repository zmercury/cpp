### December 26

## Parameterized Constructor

### Syntax

```cpp

```

#### Example

```cpp
#include <iostream>
using namespace std;

class Num{
    public:
        int value;
        Num(int a) {
            value = a;
        }
};

int main() {
        Num a1(45);
        cout << "The value is = " << a1.value << endl;

        return 0;
}
```