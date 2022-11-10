### November 10, 2022

Classwork

```cpp
//simple interest using double

#include <iostream>

using namespace std;

int main() {
    double simpleInterest, principal, rate, time;

    cout << "Enter the Principal: ";
    cin >> principal;

    cout << "Enter the Rate: ";
    cin >> rate;
    
    cout << "Enter the Time: ";
    cin >> time;

    simpleInterest = (principal * time * rate) / 100;

    cout << "The simple interest is " << simpleInterest;

    return 0;
}
```

```cpp
//area of circle

#include <iostream>

using namespace std;

int main() {
    float areaOfCircle, radius;
    double pi = 3.14;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    areaOfCircle = pi * radius * radius;

    cout << "The area of the circle is " << areaOfCircle << " cm2";

    return 0;
}
```