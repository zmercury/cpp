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