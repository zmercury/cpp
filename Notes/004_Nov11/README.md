### November 11, 2022

Classwork


```cpp
class className {
    //data member(s) and member function(s)
};
```
 

### Programs using Classes

```cpp
//Prints Hello World using class

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

```cpp
//Adds two numbers 

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

```cpp
//Gets name and prints it

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

```cpp

```
