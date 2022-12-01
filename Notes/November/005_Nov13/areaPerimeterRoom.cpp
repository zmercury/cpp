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