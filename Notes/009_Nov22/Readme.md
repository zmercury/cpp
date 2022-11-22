### November 22 

Control Statement
-

1. if else statement
2. Switch
3. Loop
4. Jump

###  Fblock

1. if
    1) checks single condition only
2. if..... else
    1) checks dual condition only
3. if... else if.... else
    1) checks more than 2 condition

___

#### Checks of the input number is positive or not 
```cpp
#include <iostream>

using namespace std;

int main() {
    int a;

    cout << "Enter a number: ";
    cin >> a;

    if(a > 1) {
        cout << "number is positive";
    }

    return 0;
}
```
#### check if input numbers is positive or negative

```cpp
#include <iostream>

using namespace std;

int main() {
    int a;

    cout << "Enter a number: ";
    cin >> a;

    if(a > 1 && a != 0) {
        cout << "number is positive";
    } else {
        cout << "number is negative";
    }

    return 0;
}
```

#### checks if the input number is positive, negative or zero

```cpp
#include <iostream>

using namespace std;

int main() {
    int a;

    cout << "Enter a number: ";
    cin >> a;

    if(a == 0) {
        cout << "number is zero";
    } else if( a < 1) {
        cout << "number is negative";
    } else {
        cout << "number is positive";
    }

    return 0;
}
```

#### enter the marks of five subjects and find the total marks, percentage and grades using classes

```cpp
#include <iostream>

using namespace std;

class marks {
    public:
        double english, nepali, account, maths, computer;
        double totalMarks, percentage;

        void getMarks() {
            cout << "Enter the marks of English: ";
            cin >> english;
            cout << "Enter the marks of Nepali: ";
            cin >> nepali;
            cout << "Enter the marks of Account: ";
            cin >> account;
            cout << "Enter the marks of Maths: ";
            cin >> maths;
            cout << "Enter the marks of Computer: ";
            cin >> computer;
        }

        void calcTotal() {
            totalMarks = english + maths + nepali + computer + account;
            cout << "Total Marks of all subject = " << totalMarks << endl;
        }

        void calcPercentage() {
            percentage = (totalMarks / 500) * 100;
        }

        void showGrades() {
            if (percentage >= 90) {
                cout << "Grades = A+";
            } else if (percentage < 90 && percentage >= 80) {
                cout << "Grades = A";
            } else if (percentage < 80 && percentage >= 70) {
                cout << "Grades = B+";
            } else if (percentage < 70 && percentage >= 60) {
                cout << "Grades = B";
            } else if (percentage < 60 && percentage >= 50) {
                cout << "Grades = C+";
            } else if (percentage < 50 && percentage >=40 ) {
                cout << "Grades = C";
            } else {
                cout << "FAIL";
            }
        }
};

int main() {
        marks mk;

        mk.getMarks();
        mk.calcTotal();
        mk.calcPercentage();
        mk.showGrades();

        return 0;
}
```



