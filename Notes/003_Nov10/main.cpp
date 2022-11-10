#include <iostream>

using namespace std;

int main() {
    double simpleInterest, principal, rate, time;

    cout << "Enter the Principal: " << endl;
    cin >> principal;

    cout << "Enter the Rate: " << endl;
    cin >> rate;
    
    cout << "Enter the Time: " << endl;
    cin >> time;

    simpleInterest = (principal * time * rate) / 100;

    cout << "The simple interest is " << simpleInterest;

    return 0;
}