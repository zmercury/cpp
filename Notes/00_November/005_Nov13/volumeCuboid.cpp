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