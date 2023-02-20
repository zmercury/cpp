//simple interest using double

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