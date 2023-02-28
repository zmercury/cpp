### Feb 28

```cpp
#include <iostream>
using namespace std;

class MyClass {
public:
  static int staticNum; // static data member
  int nonStaticNum;     // non-static data member
};

// Definition of staticNum
int MyClass::staticNum = 0;

int main() {
  MyClass obj1, obj2;

  // Set values of non-static data member
  obj1.nonStaticNum = 5;
  obj2.nonStaticNum = 10;

  // Access and modify static data member
  MyClass::staticNum = 15;

  cout << "Object 1: staticNum = " << MyClass::staticNum
       << ", nonStaticNum = " << obj1.nonStaticNum << endl;
  cout << "Object 2: staticNum = " << MyClass::staticNum
       << ", nonStaticNum = " << obj2.nonStaticNum << endl;

  return 0;
}
```