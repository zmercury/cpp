### December 1

Increment / Decrement Operator
-

1. Increment (++)
1. Decrement (--)


Assignment
-

1. Post and Pre increment/ decrement in c++

Ternary Operator
-

```cpp
//syntax of ternary operator

(condition) ? ture statement : false statement;
```

```cpp
//program that uses ternary operator

#include <iostream>
using namespace std;

int main() {
  int age = 21;
  string agePar;

  agePar = (age < 18) ? "Child" : "Adult";
  cout << agePar;
  return 0;
}
```