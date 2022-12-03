#include <iostream>

using namespace std;

class temprature {
    public:
        double tempFahrenheit;
        double tempCelcius;

        void getTemprature() {
            cout << "Enter temprature in celcius: ";
            cin >> tempCelcius;
        }

        void convTemp() {
            tempFahrenheit = (tempCelcius * 1.8) + 32;
            cout << "Temprature in F is " << tempFahrenheit << "F";
        }    
};

int main() {
        temprature t1;

        t1.getTemprature();
        t1.convTemp();

        return 0;
}