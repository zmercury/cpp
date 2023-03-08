### Mar 7

#### 1. Write a program to find the area of rectangle using pure virtual function
```cpp
#include <iostream>

using namespace std;

class Rectangle {
  public:
    float width;
    float length;

    virtual float area() = 0;

    Rectangle(float l, float w) {
      length = l;
      width = w;
    }
    
    float area() {
      return length * width;
    }
};

int main() {
    float m, n;
    cout << "Enter the length of rectangle: ";
    cin >> m;
    cout << "Enter the breath of rectangle: ";
    cin >> n;

    Rectangle r(m,n);
    Rectangle *shape = &r;

    cout << "Area of rectangle = " << shape->area() << "cm2"<< endl;
    
    return 0;
}
```