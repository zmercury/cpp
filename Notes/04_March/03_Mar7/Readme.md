### Mar 7

#### 1. Write a program to find the area of rectangle using pure virtual function
```cpp
#include <iostream>

using namespace std;

class Shape {
  public:
    virtual float area() = 0;
};

class Rectangle : public Shape {
  public:
    float width;
    float length;

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
    Shape *shape = &r;

    cout << "Area of rectangle = " << shape->area() << "cm2"<< endl;
    
    return 0;
}
```