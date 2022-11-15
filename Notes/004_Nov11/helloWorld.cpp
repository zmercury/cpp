//Prints Hello World using class

#include <iostream>

using namespace std;

class sayHello {
    public:
        string message = "Hello World!";
};

int main() {
        sayHello msg;
        cout << msg.message;
        return 0;
}