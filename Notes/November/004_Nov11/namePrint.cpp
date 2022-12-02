//Gets name and prints it

#include <iostream>

using namespace std;

class student {
    public:
        string name;

        void enterName() {
            cout << "Enter your name: ";
            cin >> name;
        }

        void displayName() {
            cout << "Your name is " << name;
        }
};

int main() {
        student s1;
        s1.enterName();
        s1.displayName();
        return 0;
}
