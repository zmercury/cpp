#include <iostream>

using namespace std;

class ageInDays {
    public:
        int age;
        int days;
        int totalDays = 365;

        void readAge() {
            cout << "Enter your age: ";
            cin >> age;
        }

        void calcAge() {
            days = totalDays * age;
            cout << "Age in days is " << days << " Days" << endl;
        }
};

int main() {
        ageInDays age1;

        age1.readAge();
        age1.calcAge();

        return 0;
}