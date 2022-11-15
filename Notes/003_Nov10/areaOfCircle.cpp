//area of circle (Trad)

#include <iostream>

using namespace std;

int main() {
    float areaOfCircle, radius;
    double pi = 3.14;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    areaOfCircle = pi * radius * radius;

    cout << "The area of the circle is " << areaOfCircle << " cm2";

    return 0;
}

