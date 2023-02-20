### November 30

### Assignment Operator

|Operators| Name|
|:-:|---|
|=| Assignment|
|+=| Increment Assignment|
|-=| Decrement Assignemnt|
|*=| Multiplication Assignment|
|/=|Division Assignment|
|%=| Modulus Assignment|

### Relational Operator

|Operators| Name|Example|
|:-:|---|---|
|==|Equals to|a == 3|
|!=| Not Equals to|5 != 3 -> True|
|>| is Greater than|5 > 3  -> True|
|<| is Smaller than|5 < 3 -> False|
|>=| is greater than or equals to|5 >= 3 -> True|
|<=| is smaller than or equals to|5 <= 3 -> False|

### Logical Operator

|Operators| Name|Example|
|:-:|---|---|
|&&|Logical AND||
|&#124;&#124;| Logical OR||
|!| Logical NOT|


Classwork
-

```cpp
// Write a cpp program to enter all three side of a triangle and display equilateral, isoceles or scalene.

#include <iostream>

using namespace std;

class triangle {
    public:
        double sideOne, sideTwo, sideThree;

        void getSides() {
            cout << "Enter Side One: ";
            cin >> sideOne;
            cout << "Enter Side Two: ";
            cin >> sideTwo;
            cout << "Enter Side Three: ";
            cin >> sideThree;
        }

        void checkTriangle() {
            if(sideOne == sideTwo && sideTwo == sideThree) {
                cout << "Equilateral Triangle";
            } else if(sideOne == sideTwo || sideTwo == sideThree || sideThree == sideOne) {
                cout << "Isosceles Triangle";
            } else {
                cout << "Scalene Triangle";
            }
        }
};

int main() {
        triangle tg;

        tg.getSides();
        tg.checkTriangle();

        return 0;
}
```