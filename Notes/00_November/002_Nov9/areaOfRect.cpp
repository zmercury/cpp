//Program to find the area
#include <iostream>

using namespace std;

int main() {
    int area,l,b;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breath: ";
    cin >> b;
    area = l*b;
    cout << "The area is " << area << " sq.m";
    return 0;
}