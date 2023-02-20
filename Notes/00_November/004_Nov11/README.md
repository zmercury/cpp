### November 11, 2022

Classwork


```cpp
class className {
    //data member(s) and member function(s)
};
```
 

### Programs using Classes

### 1. Prints Hello World using class

```cpp
#include <iostream>

using namespace std;

class sayHello {
    public:
        string message = "Hello World!";
};

int main() {
        sayHello msg;
        cout << msg.message;
        return 0;
}
```
#### Output
```md
> Hello World!
```

### 2. Adds two numbers 

```cpp
#include <iostream>

using namespace std;

class addNum {
    public:
        int a=10, b=20;
};

int main() {
        int sum;
        addNum a1;

        cout << "The sum is "<< a1.a + a1.b;

        return 0;
}
```

#### Output
```md
> The sum is 30
```

### 3. Gets name and prints it

```cpp
#include <iostream>

using namespace std;

class student {
    public:
        string userName;

        void enterName() {
            cout << "Enter your name: ";
            cin >> userName;
        }

        void displayName() {
            cout << "Your name is " << userName;
        }
};

int main() {
        student s1;
        s1.enterName();
        s1.displayName();
        return 0;
}
```

#### Output
```md
> Enter your name: Mercury
> Your name is Mercury
```


### 4. Asks two numbers and prints its sum

```cpp
#include <iostream>

using namespace std;

class addNum {
    public:
        int a, b;
        int sum = 0;

        void askNum() {
            cout << "Enter any two number: ";
            cin >> a;
            cin >> b;
            sum = a + b;
        }

        void calcSum() {
            cout << "The sum is " << sum;
        }
};

int main() {
        addNum ap;
        ap.askNum();
        ap.calcSum();
        return 0;
}
```
#### Output
```md
> Enter any two number: 10 20 
> The sum is 30
```


### 5. Area of Rectriangle
```cpp
#include <iostream>
using namespace std;

class Area
{
    int l, b;

public:
    void input()
    {
        cout << "Enter length :";
        cin >> l;
        cout << "Enter breadth :";
        cin >> b;
    }
    void output()
    {
        cout << "The area is = " << l*b;
    }
};

int main()
{
    Area a1;
    a1.input();
    a1.output();
    return 0;
}
```

#### Output
```md
> Enter length: 10
> Enter breath: 4
> The area is 40
```

### 6. Simple Interest

```cpp
#include <iostream>
using namespace std;

class SimpleInterest
{
    double p, t, r;

public:
    void input()
    {
        cout << "Enter principal amount:";
        cin >> p;
        cout << "Enter time:";
        cin >> t;
        cout << "Enter rate of interest:";
        cin >> r;
    }
    void output()
    {
        cout << "Simple interest =" << (p * t * r) / 100;
    }
};

int main()
{
    SimpleInterest s1;
    s1.input();
    s1.output();
    return 0;
}
```
#### Output

```md
> Enter principal amount: 20000
> Enter time: 2.5
> Enter rate of interest: 12
> Simple interest = 
```



### 7. Area of circle

```cpp
#include <iostream>
using namespace std;

class Area
{
    float r, area;

public:
    void input()
    {
        cout << "Enter the value of radius:";
        cin >> r;
    }
    void output()
    {
        cout << "The area is = " << 3.14 * r * r;
    }
};

int main()
{
    Area a1;
    a1.input();
    a1.output();
    return 0;
}
```

#### Output
```md
> Enter the value of radius: 7
> The area is 153.94
```
