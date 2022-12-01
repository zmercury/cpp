#include <iostream>

using namespace std;

class temprature {
    public:
        double tempFahrenheit;

        void convTemp(double temp) {
            tempFahrenheit = (temp * 1.8) + 32;
            cout << "Temprature in F is " << tempFahrenheit << "F";
        }    
};

int main() {
        temprature t1;
        double tempCelcius;

        cout << "Enter temprature in celcius: ";
        cin >> tempCelcius;

        t1.convTemp(tempCelcius);

        return 0;
}

