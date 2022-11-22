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


## Classwork

#### 1. Checks of the input number is positive or not 
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
#### 2. check if input numbers is positive or negative

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

#### 3. checks if the input number is positive, negative or zero

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

#### 4. enter the marks of five subjects and find the total marks, percentage and grades using classes

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

## Assignment

#### 1. Enter values of length and breadth of a rectangle from user and check if it is square or not.

```cpp
#include <iostream>

using namespace std;

class rect {
    public:
        int length, breath;

        void getData() {
            cout << "Enter the length of the rectriangle: ";
            cin >> length;
            cout << "Enter the breath of the rectriangle: ";
            cin >> breath;
        }

        void checkShape() {
            if(length == breath) {
                cout << "It is a square!";
            } else {
                cout << "It is a rectriangle!";
            }
        }
};

int main() {
        rect rt;

        rt.getData();
        rt.checkShape();

        return 0;
}
```

#### 2. A shop will give discount of 10% if the cost of purchased quantity is more than 1000. Ask user for quantity. Suppose, one unit will cost 100. Judge and print total cost for user.

```cpp
#include <iostream>

using namespace std;

class product {
    public:
        double quantity, total, discount;
        double perUnit = 100;

        void getQuantity() {
            cout << "Enter the quantity of product you want to buy: ";
            cin >> quantity;
        }

        void calcTotal() {
            total = quantity * perUnit;
            
            if (total <= 1000) {
                cout << "Total Cost = Rs. " << total;
            } else if (total > 1000) {
                discount = 0.1 * quantity;
                cout << "Total Cost = Rs. " << total - discount;
            } else {
                cout << "Invalid Input!";
            }
        }
};

int main() {
        product pd;

        pd.getQuantity();
        pd.calcTotal();

        return 0;
}
```

#### 3. A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years. Ask user for their salary and year of service and print the net bonus amount.

```cpp
#include <iostream>

using namespace std;

class employee {
    public:
        double salary, time;
        double bonus;

        void getData() {
            cout << "Enter your salary: ";
            cin >> salary;
            cout << "Enter the year of service in this organization: ";
            cin >> time;
        }

        void calcBonus() {
            if(time > 5.0) {
                bonus = 0.05 * salary;
                cout << "Bonus = " << bonus;
            } else if(time < 5.0) {
                cout << "Bonus = 0";
            } else {
                cout << "Invalid Input!";
            }
        }
};

int main() {
        employee ep;

        ep.getData();
        ep.calcBonus();

        return 0;
}
```

#### 4. check that whether a number is even or odd.

```cpp
#include <iostream>

using namespace std;

class evenOdd {
    public:
        int num;

        void getInput() {
            cout << "Enter any number: ";
            cin >> num;
        }

        void findEvenOdd() {
            if(num == 0) {
                cout << "Zero";
            } else if(num % 2 == 0) {
                cout << num << " is even number!";
            } else {
                cout << num << " is odd number!";
            }
        }
};

int main() {
        evenOdd eo;

        eo.getInput();
        eo.findEvenOdd();

        return 0;
}
```

#### 5. Program to check whether a number is divisible by 5 and 11 or not.

```cpp
#include <iostream>

using namespace std;

class division {
    public:
        int number;

        void getInput() {
            cout << "Enter any number: ";
            cin >> number;
        }

        void checkCondition() {
            if(number % 5 == 0 && number % 11 == 0) {
                cout << number << " is divisible by 5 and 11!";
            } else {
                cout << number << " is not divisible by 5 and 11!";
            }
        }
};

int main() {
        division n1;

        n1.getInput();
        n1.checkCondition();

        return 0;
}
```

#### 6. Program to check whether the triangle is an equilateral, isosceles or scalene triangle.

```cpp
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

#### 7. Program to calculate profit or loss.

```cpp
#include <iostream>

using namespace std;

class profitLoss {
    public:
        double profit, loss;
        double sellingPrice, buyingPrice;

        void getPrices() {
            cout << "Enter the buying price: ";
            cin >> buyingPrice;
            cout << "Enter the selling price: ";
            cin >> sellingPrice;
        }

        void findProfitLoss() {
            if(buyingPrice > sellingPrice) {
                loss = buyingPrice - sellingPrice;
                cout << "Total Loss = Rs. " << loss;
            } else if(buyingPrice < sellingPrice) {
                profit = sellingPrice - buyingPrice;
                cout << "Total profit = Rs. " << profit;
            } else {
                cout << "Neither Profit Nor Loss";
            }
        }
};

int main() {
        profitLoss pl;

        pl.getPrices();
        pl.findProfitLoss();

        return 0;
}
```

#### 8. Program to check whether a year is a leap year or not by using an if-else statement.

```cpp
#include <iostream>

using namespace std;

class alphabet {
    public:
        char word;

        void getInput() {
            cout << "Enter any character: ";
            cin >> word;
        }

        void findAlphabet() {
            if(word >= 'a' && word <= 'z' || word >= 'A' && word <= 'Z') {
                cout << word << " is Alphabet!";
            } else {
                cout << word << " is not Alphabet!";
            }
        }
};

int main() {
        alphabet ap;

        ap.getInput();
        ap.findAlphabet();

        return 0;
}
```

#### 9. program that checks whether the character is an alphabet or not.

```cpp

```

#### 10. Program to check whether a number is a prime or composite number.

```cpp

```


