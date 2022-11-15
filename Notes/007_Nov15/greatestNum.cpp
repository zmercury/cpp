#include <iostream>

using namespace std;

class greatestNum {
    public:
        void findGreatest(int &x,int &y,int &z) {
            if(x > y) {
                if(x > z) {
                    cout << x << " is greater!" << endl;
                } else {
                    cout << z << " is greater!" << endl;
                }
            } else {
                if(y > z) {
                    cout << y << " is greater!" << endl;
                } else {
                    cout << z << " is greater!" << endl;
                }
            }
        }
};

int main() {
        greatestNum n1;
        int numOne;
        int numTwo;
        int numThree;

        cout << "Enter any three number: ";
        cin >> numOne;
        cin >> numTwo;
        cin >> numThree;

        n1.findGreatest(numOne,numTwo,numThree);

        return 0;
}