### November 10, 2022

Classwork
-

### 1. Simple interest using double

```cpp
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

#### Output
```md
> Enter the Principal: 20000
> Enter the Rate: 12
> Enter the Time: 2.5
> The simple interest is  
```


### 2. Area of circle

```cpp
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

#### Output
```md
> Enter the radius of the Circle: 14
> The area of the circle is 615.75cm2
```