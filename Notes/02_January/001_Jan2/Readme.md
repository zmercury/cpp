### January 2


### 1. Write a program to enter 5 marks of 5 students using array within class
```cpp
#include <iostream>
using namespace std;

class studentsMarks {
    public:
        int arr[5];

        void askInput() {
            for (int i = 0; i < 5; i++) {
                cout << "Enter marks of student " << i+1 << ": ";
                cin >> arr[i];
            }
        }

        void displayArray() {
            cout << "Marks = ";
            for(int i = 0; i < 5; i++) {
                cout << arr[i] << " ";
            }
        }
};

int main() {
        studentsMarks st;

        st.askInput();
        st.displayArray();

        return 0;
}
```


