#include <iostream>

using namespace std;

class greatestNum {
    public:
        int numOne;
        int numTwo;
        int numThree;

        void getInput() {
            cout << "Enter any three number: ";
            cin >> numOne;
            cin >> numTwo;
            cin >> numThree;
        }

        void findGreatest() {
            if(numOne > numTwo) {
                if(numOne > numThree) {
                    cout << numOne << " is greater!" << endl;
                } else {
                    cout << numThree << " is greater!" << endl;
                }
            } else {
                if(numTwo > numThree) {
                    cout << numTwo << " is greater!" << endl;
                } else {
                    cout << numThree << " is greater!" << endl;
                }
            }
        }
};

int main() {
        greatestNum n1;
        n1.getInput();
        n1.findGreatest();

        return 0;
}