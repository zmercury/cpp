### Feb 26

## Array of Object

#### 1. Program that takes input of n number of student and displays it using array of object

```cpp
#include <bits/stdc++.h>
using namespace std;

class Students {
    int roll;
    string name;
    
    public:
        void getData()
        {
            cout << "Enter roll number: ";
            cin >> roll;
            cout << "Enter name: ";
            cin >> name;
        }

        void showData() {
            cout << "Roll no. = " << roll << endl;
            cout << "Name: " << name << endl;
        }
};

int main() {
    Students stu[20];
    int n;

    cout << "Enter the number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        stu[i].getData();
    }

    for (int i = 0; i < n; i++) {
        cout << "Displaying the data of student(s): " << endl;
        stu[i].showData();
    }

    return 0;
}
```