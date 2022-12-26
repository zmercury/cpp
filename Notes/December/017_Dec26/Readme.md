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

#### Example Two

```cpp
// Multiple Object with Parameters 

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
        Num a2(4);
        Num a3(5);
        Num a4(245);
        cout << "The value is = " << a1.value << endl;
        cout << "The value is = " << a2.value << endl;
        cout << "The value is = " << a3.value << endl;
        cout << "The value is = " << a4.value << endl;

        return 0;
}
```