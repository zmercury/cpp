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