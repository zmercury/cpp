### December 12

## Type Conversion

#### 1. WAP in c++ to enter the marks of 5 students and calculate the average marks

```cpp
//WAP in c++ to enter the marks of 5 students and calculate the average marks

#include <iostream>
using namespace std;


int main() {
    double avg;
    int subOne, subTwo, subThree, subFour, subFive, sum = 0;

    cout << "Enter the marks of Subject A: ";
    cin >> subOne;
    cout << "Enter the marks of Subject B: ";
    cin >> subTwo;
    cout << "Enter the marks of Subject C: ";
    cin >> subThree;
    cout << "Enter the marks of Subject D: ";
    cin >> subFour;
    cout << "Enter the marks of Subject E: ";
    cin >> subFive;
    
    sum = (subOne + subTwo + subThree + subFour + subFive);

    avg = (double)sum / 5.0;

    cout << "The average is " << avg;

    return 0;
}
```