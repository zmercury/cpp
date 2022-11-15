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