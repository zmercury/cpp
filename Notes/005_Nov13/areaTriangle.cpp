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