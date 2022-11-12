#include <iostream>

using namespace std;

class addNum {
    public:
        int a, b;
        int sum = 0;

        void askNum() {
            cout << "Enter any two number: ";
            cin >> a;
            cin >> b;
            sum = a + b;
        }

        void calcSum() {
            cout << "The sum is " << sum;
        }
};

int main() {
        addNum ap;
        ap.askNum();
        ap.calcSum();
        return 0;
}