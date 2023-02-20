### November 13, 2022


### 1. Area of Square

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

#### Output

```md
> Enter the length of square: 2
> The area of square is 4cm2
```

### 2. Volume of a Cuboid

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
#### Output
```md
> Enter the length of the cuboid: 10
> Enter the height of the cuboid: 10
> Enter the width of the cuboid: 10
> The volume of cuboid is 1000cm3
```


### 3. Volume of Cube

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
#### Output

```md
> Enter length of cube: 4
> The Volume of cube is 64cm3
```


### 4. Print sum, difference, product and quotient of two user input numbers.

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
#### Output

```md
> Enter any two number: 10 2                        
> The sum is 12
> The difference is 8
> The product is 20
> The quotient is 5
```

### 5. to input age of person and print in days with a appropriate format.

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

#### Output
```md
> Enter you age: 19
> Age in days is 6935 Days
```


### 6. To input length & breadth of a room and calculate and print its area and perimeter.

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
#### Output
```md
> Enter the length and breath of the room: 10 20
> The area of room is 200cm2
> The perimeter of room is 60cm
```


### 7. To read the radius of a sphere and compute its surface area and volume.

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
#### Output
```md
> Enter the raduis of the sphere: 7
> The surface area of sphere is 615.75 cm2
> The volume of sphere is 1436.76 cm3
```


### 8. To input temperature in Celsius and to print its Fahrenheit equivalent.

```cpp
#include <iostream>

using namespace std;

class temprature {
    public:
        double tempFahrenheit;
        double tempCelcius;

        void getTemprature() {
            cout << "Enter temprature in celcius: ";
            cin >> tempCelcius;
        }

        void convTemp() {
            tempFahrenheit = (tempCelcius * 1.8) + 32;
            cout << "Temprature in F is " << tempFahrenheit << "F";
        }    
};

int main() {
        temprature t1;

        t1.getTemprature();
        t1.convTemp();

        return 0;
}
```
#### Output
```md
> Enter temprature in celcius: 25
> Temprature in F is 77F
```


### 9. To read base and altitude of a triangle and prints its area.

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

            cout << "The area of triangle is " << (0.5 * base * height) << " cm2";
        } 
};

int main() {
        triangle t1;
        t1.areaTri();
        return 0;
}
```

#### Output
```md
> Enter the base of the triangle: 14
> Enter the height of the triangle: 7
> The area of triangle is 49cm2
```
