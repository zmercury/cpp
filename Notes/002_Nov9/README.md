### November 9, 2022


### 1. Adding 2 numbers 
```cpp
#include <iostream>

using namespace std;

int main() {
    int a = 5, b = 10;
    int sum = a + b;
    cout << "The sum is " << sum;
    return 0;
}
```


### 2. Program that takes string input using cin
```cpp

#include <iostream>

using namespace std;

int main() {
    string fName;
    cout << "Enter your name: ";
    cin >> fName;
    cout << "Your name is " << fName;
    return 0;
}
```

### 3. Sum using user input

```cpp
#include <iostream>

using namespace std;

int main() {
    int a,b,sum=0;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    sum = a + b;
    cout << "The sum is " << sum;
    return 0;
}
```

### 4. Program to find the area

```cpp
#include <iostream>

using namespace std;

int main() {
    int area,l,b;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breath: ";
    cin >> b;
    area = l*b;
    cout << "The area is " << area << " sq.m";
    return 0;
}
```

