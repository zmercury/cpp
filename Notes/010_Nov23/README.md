### November 23

Switch Case Statement
-

#### 1. Display days using switch (User Input)

```cpp
#include <iostream>

using namespace std;

int main() {
    int inp;

    cout << "Enter any number from 1 - 7: ";
    cin >> inp;

    switch(inp) {
        case 1: {
            cout << "Sunday";
            break;
        }
        case 2: {
            cout << "Monday";
            break;
        }
        case 3: {
            cout << "Tuesday";
            break;
        }
        case 4: {
            cout << "Wednesday";
            break;
        }
        case 5: {
            cout << "Thursday";
            break;
        }
        case 6: {
            cout << "Friday";
            break;
        }
        case 7: {
            cout << "Saturday";
            break;
        }
        default: {
            cout << "Invalid Input!";
            break;
        }
    }
    return 0;
}
```

#### Output

```md
> Enter any number from 1 - 7: 5
> Thrusday
```

#### 2. Print string using alphabet


```cpp
#include <iostream>

using namespace std;

int main() {
    char inp;

    cout << "Enter any character from a - e: ";
    cin >> inp;

    switch(inp) {
        case 'a': {
            cout << "Apple";
            break;
        }
        case 'b': {
            cout << "Ball";
            break;
        }
        case 'c': {
            cout << "Cat";
            break;
        }
        case 'd': {
            cout << "Dog";
            break;
        }
        case 'e': {
            cout << "Eagle";
            break;
        }
        default: {
            cout << "Invalid Input!";
            break;
        }
    }
    return 0;
}
```

#### Output

```md
> Enter any character from a - e: b
> Ball
```

#### 3. Qn. no. 2 using Class

```cpp
#include <iostream>

using namespace std;

class character {
    public:
        char inp;

        void getInput() {
            cout << "Enter any character from a - e: ";
            cin >> inp;
        }

        void findCondition() {
            switch(inp) {
                    case 'a': {
                        cout << "Apple";
                        break;
                    }
                    case 'b': {
                        cout << "Ball";
                        break;
                    }
                    case 'c': {
                        cout << "Cat";
                        break;
                    }
                    case 'd': {
                        cout << "Dog";
                        break;
                    }
                    case 'e': {
                        cout << "Eagle";
                        break;
                    }
                    default: {
                        cout << "Invalid Input!";
                        break;
                    }
                }
        }
        
};

int main() {
        character ch;

        ch.getInput();
        ch.findCondition();

        return 0;
}
```

#### Output

```md
> Enter any character from a - e: e
> Eagle
```

### Assignment


#### 1. Input two number and find the sum, difference, product and quotient using switch

```cpp
#include <iostream>

using namespace std;

class maths {
    public:
        int sum = 0, div, mul, sub;
        int a, b;
        char choice;

        void getInput() {
            cout << "Enter one number: ";
            cin >> a;
            cout << "Enter two number: ";
            cin >> b;
        }

        void getChoice() {
            cout << "Enter + for addition!" << endl;
            cout << "Enter - for Substraction!" << endl;
            cout << "Enter * for Multiplication!" << endl;
            cout << "Enter / for Division!" << endl;
            cin >> choice;
        }

        void operation() {
            switch(choice) {
                case '+': {
                    sum = a + b;
                    cout << "Sum is " << sum;
                    break;
                };
                case '-': {
                    sub = a - b;
                    cout << "Substraction is " << sub;
                    break;
                };
                case '*': {
                    mul = a * b;
                    cout << "Multiplication is " << mul;
                    break;
                };
                case '/': {
                    div = a / b;
                    cout << "Division is " << div;
                    break;
                };
                default: {
                    cout << "Invalid Input!";
                    break;
                }
            }
        }

};

int main() {
        maths mt;

        mt.getInput();
        mt.getChoice();
        mt.operation();

        return 0;
}
```

#### Output

```md
> Enter one number: 10
> Enter two number: 2 
> Enter + for addition!
> Enter - for Substraction!
> Enter * for Multiplication!*
> Enter / for Division!
> 1
> Sum is 12
```