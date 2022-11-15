//Simple Interest

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