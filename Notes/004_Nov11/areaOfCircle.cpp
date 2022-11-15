//Area of circle

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
        cout << "The are is = " << 3.14 * r * r;
    }
};

int main()
{
    Area a1;
    a1.input();
    a1.output();
    return 0;
}