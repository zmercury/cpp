### November 13, 2022

1. Area of Square

```cpp
#include <iostream>

using namespace std;

class areaSquare {
    public:
        int length;
        
        void readLength() {
            cout << "Enter length of square: ";
            cin >> length;
        }

        void calcArea() {
            cout << "The area of square is " << length * length << " cm2";
        }
};

int main() {
        areaSquare a1;

        a1.readLength();
        a1.calcArea();

        return 0;
}
```

2. Volume of a Cuboid

```cpp
#include <iostream>

using namespace std;

class volumeCuboid {
    public:
        int length;
        int height;
        int width;
        int volumeOfCuboid;

        void readData() {
            cout << "Enter the length of the cuboid: ";
            cin >> length;
            cout << "Enter the height of the cuboid: ";
            cin >> height;
            cout << "Enter the width of the cuboid: ";
            cin >> width;
        }

        void calcVolume() {
            volumeOfCuboid = length * height * width;
            cout << "The volume of cuboid is " << volumeOfCuboid << " cm3";
        }
};

int main() {
        volumeCuboid v1;

        v1.readData();
        v1.calcVolume();

        return 0;
}
```

3. Volume of Cube

```cpp
#include <iostream>
#include <math.h>

using namespace std;

class volumeCube {
    public:
        int length;
        
        void readLength() {
            cout << "Enter length of cube: ";
            cin >> length;
        }

        void calcVolume() {
            cout << "The volume of cube is " << pow(length,3) << " cm3";
        }
};

int main() {
        volumeCube v1;

        v1.readLength();
        v1.calcVolume();

        return 0;
}
```

3. Print sum, difference, product and quotient of two user input numbers.

```cpp
#include <iostream>

using namespace std;

class calculator {
    public:
        int a, b;
        int sum = 0;
        int diff;
        int mul;
        int rem;

        void readInput() {
            cout << "Enter any two number: ";
            cin >> a;
            cin >> b;
        }

        void calcSum() {
            sum = a + b;
            cout << "The sum is " << sum << endl;
        }

        void calcDiff() {
            if(a > b) {
                diff = a - b;
            } else {
                diff = b - a;
            }
            cout << "The difference is " << diff << endl;
        }

        void calcMul() {
            mul = a * b;
            cout << "The product is " << mul << endl;
        }

        void calcRem() {
            rem = a / b;
            cout << "The quotient is " << rem << endl;
        }
};

int main() {
        calculator c1;

        c1.readInput();
        c1.calcSum();
        c1.calcDiff();
        c1.calcMul();
        c1.calcRem();

        return 0;
}
```
