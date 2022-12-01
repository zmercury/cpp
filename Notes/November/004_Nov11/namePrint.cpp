//Gets name and prints it

#include <iostream>

using namespace std;

class student {
    public:
        string userName;

        void enterName() {
            cout << "Enter your name: ";
            cin >> userName;
        }

        void displayName() {
            cout << "Your name is " << userName;
        }
};

int main() {
        student s1;
        s1.enterName();
        s1.displayName();
        return 0;
}