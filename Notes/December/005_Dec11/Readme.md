### December 11


## What is Namespace?
Namespace is a decelaration where the scope of indentifiers such as functions, types, names, classes, variables declared code often has multiple libraries and namespaces which helps to avoid ambiguity that can write when two identifiers have the same name.

#### Syntax

```cpp
namespace namespace_name {
    statement n;
}
```

#### Example

```cpp
#include <stdio.h>
namespace sectionOne {
    void func() {
        cout << "Hello Nepal" << endl;
    }
}

namespace sectionTwo {
    void func() {
        cout << "Hello World" << endl;
    }
}

int main() {
    sectionOne::func();
    sectionTwo::func();
    return 0;
}
```

#### 1.

```cpp
#include <iostream>
#include "datapath.h"

namespace num {
    int a = 45;
}

int main() {
    int a = 85;
    std::cout << "a = " << a << std::endl;
    std::cout << "a = " << num::a;
    return 0;
}
```

#### 2. 

```cpp
#include <iostream>
using namespace std;

namespace s1 {
    void funcOne() {
        cout << "Hello Nepal!" << endl;
    }
}

namespace s2 {
    void funcTwo() {
        cout << "Hello Sanothimi!" << endl;
    }
}

int main() {
    s1::funcOne();
    s2::funcTwo();

    return 0;
}
```
