### Jan 2

## Assignment

#### 1. Write a program that takes 5 students marks as input and displays it in ascending order.

```cpp
#include <iostream>
using namespace std;

class studentMarks {
    public: 
        int i, j, temp;
        int arr[5];

        void getInput() {
            for (i = 0; i < 5; i++){
                cout << "Enter marks of " << i+1 << " student: ";
                cin >> arr[i];
            }
        }

        void sortArray() {
            for (i = 0; i < 5; i++){
                for (j = i; j < 5; j++){
                    if (arr[i] > arr[j+1]){
                        temp = arr[i];
                        arr[i] = arr[j+1];
                        arr[j+1] = temp;
                    }
                }
            }
        }

        void showOutput() {
            cout << "Marks in the ascending order are: " << endl;
            for (i = 0; i < 5; i++){
                cout << arr[i] << endl;   
            }
        }
};

int main(){
    studentMarks stu;

    stu.getInput();
    stu.sortArray();
    stu.showOutput();

    return 0;
}
```