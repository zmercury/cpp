#include <iostream>

using namespace std;

class calculator {
    public:
        int a, b;
        int sum = 0;
        int diff;
        int mul;
        int rem;

        void readInput() {
            cout << "Enter any two number: ";
            cin >> a;
            cin >> b;
        }

        void calcSum() {
            sum = a + b;
            cout << "The sum is " << sum << endl;
        }

        void calcDiff() {
            if(a > b) {
                diff = a - b;
            } else {
                diff = b - a;
            }
            cout << "The difference is " << diff << endl;
        }

        void calcMul() {
            mul = a * b;
            cout << "The product is " << mul << endl;
        }

        void calcRem() {
            rem = a / b;
            cout << "The quotient is " << rem << endl;
        }
};

int main() {
        calculator c1;

        c1.readInput();
        c1.calcSum();
        c1.calcDiff();
        c1.calcMul();
        c1.calcRem();

        return 0;
}