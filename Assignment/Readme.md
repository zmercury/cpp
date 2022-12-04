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

#### Output
```md
> The sum is 15
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

#### Output
```md
> Enter your name: Nikhil
> Your name is Nikhil
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

#### Output
```md
> Enter a: 8
> Enter b: 12
> The sum is 20
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
#### Output
```md
> Enter length: 7
> Enter breath: 3
> The area is 21 sq.m
```

### 5. Simple interest using double

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


### 6. Area of circle

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

### 7. Prints Hello World using class

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

### 8. Adds two numbers 

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

### 9. Gets name and prints it

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


### 10. Asks two numbers and prints its sum

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


### 11. Area of Rectriangle
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

### 12. Simple Interest

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



### 13. Area of circle

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

### 14. Find the greatest number among three number (using class)

```cpp
#include <iostream>

using namespace std;

class greatestNum {
    public:
        int numOne;
        int numTwo;
        int numThree;

        void getInput() {
            cout << "Enter any three number: ";
            cin >> numOne;
            cin >> numTwo;
            cin >> numThree;
        }

        void findGreatest() {
            if(numOne > numTwo) {
                if(numOne > numThree) {
                    cout << numOne << " is greater!" << endl;
                } else {
                    cout << numThree << " is greater!" << endl;
                }
            } else {
                if(numTwo > numThree) {
                    cout << numTwo << " is greater!" << endl;
                } else {
                    cout << numThree << " is greater!" << endl;
                }
            }
        }
};

int main() {
        greatestNum n1;
        n1.getInput();
        n1.findGreatest();

        return 0;
}
```

#### Output
```md
> Enter any three number: 4 5 6
> 6 is greater!
```

### 15. Using increment operator to find even number

```c
#include <stdio.h>

int main()
{
    for (int i = 2; i <= 10; i += 2)
    {
        printf("%d\t", i);
    }

    return 0;
}
```
#### Output
```md
> 2 4 6 8 10
```

### 16. Checks if the input number is positive or not 
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
#### Output

```md
> Enter a number: 10
> Number is positive
```

### 17. check if input numbers is positive or negative

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
#### Output

```md
> Enter a number: -10
> Number is negative
```

### 18. checks if the input number is positive, negative or zero

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
#### Output

```md
> Enter a number: 0
> Number is zero
```

### 19. enter the marks of five subjects and find the total marks, percentage and grades using classes

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
#### Output

```md
> Enter the marks of English: 92
> Enter the marks of Nepali: 92
> Enter the marks of Account: 92
> Enter the marks of Maths: 92
> Enter the marks of Computer: 92
> Total marks of all subject = 460
> Grade = A+
```

### 20. Enter values of length and breadth of a rectangle from user and check if it is square or not.

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
#### Output

```md
> Enter the length of the rectriangle: 10 
> Enter the breath of the rectriangle: 10
> It is a square!
```

### 21. A shop will give discount of 10% if the cost of purchased quantity is more than 1000. Ask user for quantity. Suppose, one unit will cost 100. Judge and print total cost for user.

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
                discount = 0.1 * total;
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
#### Output

```md
> Enter the quantity of product you want to buy: 9
> Total Cost = Rs. 900
```

### 22. A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years. Ask user for their salary and year of service and print the net bonus amount.

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
#### Output

```md
> Enter your salary: 20000
> Enter the year of service in this organization: 21
> Bonus = 1000
```

### 23. check that whether a number is even or odd.

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
#### Output

```md
> Enter any number: 4
> 4 is even number!
```

### 24. Program to check whether a number is divisible by 5 and 11 or not.

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
#### Output

```md
> Enter any number: 55
> 55 is divisible by 5 and 11!
```

### 25. Program to check whether the triangle is an equilateral, isosceles or scalene triangle.

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
#### Output

```md
> Enter Side One: 12
> Enter Side Two: 12
> Enter Side Three: 10
> Isosceles Triangle
```

### 26. Program to calculate profit or loss.

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
#### Output

```md
> Enter the buying price: 20000
> Enter the selling price: 21000
> Total Profit: Rs. 1000
```

### 27. Program to check whether a year is a leap year or not by using an if-else statement.

```cpp

```

### 28. program that checks whether the character is an alphabet or not.

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
#### Output

```md
> Enter any character: &
> & is not Alphabet!
```

### 29. Program to check whether a number is a prime or composite number.

```cpp
#include <iostream>
using namespace std;

class checkPrimeComposit {
  public:
    int num, count = 0;
    
    void getInput() {
      cout << "Enter any number: ";
      cin >> num;
    }

    void findCondition() {
      for(int i = 1; i <= num; i++) {
        if(num % i == 0) {
          count++;
        }
      }
      if(count == 2) {
        cout << num << " is prime number!";
      } else {
        cout << num << " is a composite number!";
      }
    }
};

int main() {
  checkPrimeComposit pc;

  pc.getInput();
  pc.findCondition();

  return 0;
}

```
#### Output

```md
> Enter any number: 7
> 7 is prime number!
```

### 30. Display days using switch (User Input)

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

### 31. Print string using alphabet


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

### 32. Qn. no. 2 using Class

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

### 33. Input two number and find the sum, difference, product and quotient using switch

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

### 34. Reverse the value of a variable 

```cpp
#include <iostream>
using namespace std;

class reverseNum {
    public:
        int numOne, numTwo, temp;

        void getNumber() {
            cout << "Enter two number: ";    
            cin >> numOne;
            cin >> numTwo;
        }

        void numberSwap() {
            temp = numOne;
            numOne = numTwo;
            numTwo = temp;
            cout << numOne << " " << numTwo;
        }
};

int main() {
        reverseNum no;

        no.getNumber();
        no.numberSwap();

        return 0;
}
```

#### Output

```md
> Enter two number: 2 4
> 4 2
```