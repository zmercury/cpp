### November 11, 2022


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

using namespace std;

class volumeCube {
    public:
        int length;
        
        void readLength() {
            cout << "Enter length of cube: ";
            cin >> length;
        }

        void calcVolume() {
            cout << "The volume of cube is " << length * length * length << " cm3";
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

4. to input age of person and print in days with a appropriate format.

```cpp
#include <iostream>

using namespace std;

class ageInDays {
    public:
        int age;
        int days;
        int totalDays = 365;

        void readAge() {
            cout << "Enter your age: ";
            cin >> age;
        }

        void calcAge() {
            days = totalDays * age;
            cout << "Age in days is " << days << " Days" << endl;
        }
};

int main() {
        ageInDays age1;

        age1.readAge();
        age1.calcAge();

        return 0;
}
```

5. To input length & breadth of a room and calculate and print its area and perimeter.

```cpp
#include <iostream>

using namespace std;

class room {
    public:
        int length;
        int breath;
        int area;
        int perimeter;

        void readData() {
            cout << "Enter the length and breath of the room: ";
            cin >> length;
            cin >> breath;
        }

        void calcArea() {
            area = length * breath;
            cout << "The area of room is " << area << " cm2" << endl;
        }

        void calcPerimeter() {
            perimeter = 2 * (length + breath);
            cout << "The perimeter of room is " << perimeter << " cm";
        }
};

int main() {
        room r1;

        r1.readData();
        r1.calcArea();
        r1.calcPerimeter();

        return 0;
}
```

6. To read the radius of a sphere and compute its surface area and volume.

```cpp
#include <iostream>

using namespace std;

class sphere {
    public:
        double pi = 3.14;
        double radius;
        double surfaceArea;
        double volume;

        void readRadius() {
            cout << "Enter the radius of the sphere: ";
            cin >> radius;
        }

        void calcSurfaceArea() {
            surfaceArea = 4 * pi * radius * radius;
            cout << "The surface area of sphere is " << surfaceArea << " cm2" << endl;
        }

        void calcVolume() {
            volume = (4 / 3) * pi * radius * radius * radius;
            cout << "The volume of sphere is " << volume << " cm3";
        }
};

int main() {
        sphere sp1;

        sp1.readRadius();
        sp1.calcSurfaceArea();
        sp1.calcVolume();

        return 0;
}
```

7. To input temperature in Celsius and to print its Fahrenheit equivalent.

```cpp
#include <iostream>

using namespace std;

class temprature {
    public:
        double tempFahrenheit;

        void convTemp(double temp) {
            tempFahrenheit = (temp * 1.8) + 32;
            cout << "Temprature in F is " << tempFahrenheit << "c";
        }
};

int main() {
        temprature t1;
        double tempCelcius;

        cout << "Enter temprature in celcius: ";
        cin >> tempCelcius;

        t1.convTemp(tempCelcius);

        return 0;
}
```

8. To read base and altitude of a triangle and prints its area.

```cpp
#include <iostream>

using namespace std;

class triangle {
    public:
        double base;
        double height;
        
        void areaTri() {
            cout << "Enter base of the triangle: ";
            cin >> base;
            cout << "Enter height of the triangle: ";
            cin >> height;

            cout << base << endl;
            cout << height << endl;

            cout << "The area of triangle is " << (0.5 * base * height) << " cm2";
        } 
};

int main() {
        triangle t1;
        t1.areaTri();
        return 0;
}
```