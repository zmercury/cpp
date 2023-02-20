//Area of Rectriangle

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