### December 29

## Constructor Overloading

### 1. Area of rectangle using constructor overloading.

```cpp
#include<iostream>
using namespace std;
class Rect{
    public:
    float area;
    Rect()
    {
        area=50;
    }
    Rect(int b)
    {
        area=10*b;
    }
    Rect(int l, int b)
    {
        area=l*b;
    }
    void display()
    {
        cout<<"the area of rectangle is = "<<area<<"m.sq"<<endl;
    }
};
int main()
{
    Rect r1;
    r1.display();
    Rect r2(6);
    r2.display();
    Rect r3(10,3);
    r3.display();
    return 0;
}
```