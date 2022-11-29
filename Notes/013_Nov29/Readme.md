### November 29

Jump Statement 
-



```cpp
//Normal Program that prints 1 - 10 using for loop

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; 1 <= 10; i++) {
        cout << i << endl;
    }
}
```


```cpp
// Program that uses break statement

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; 1 <= 10; i++) {
        if(i==4) {
            break;
        }
            cout << i << endl;
    }
}
```

```cpp
//Program that uses continue statement

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; 1 <= 10; i++) {
        if(i==4) {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}
```

Arithmetic Operators
-

| Operator | Name| Example|
|---|---|---|
|+ | Arithmatic Addition | a + b|
| - | Arithmetic Substraction| a - b|
| * | Arithmetic Multiplication| a * b|
|  / | Arithmetic Division| a / b|
| % | Aeithmetic Modulus(Reminder Operator)| a % b|

