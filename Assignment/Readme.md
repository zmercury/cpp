### Jan 2

## Classwork

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
                cout << arr[i] << " ";   
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

#### Output

```md
> Enter marks of 1 student: 4
> Enter marks of 2 student: 8
> Enter marks of 3 student: 9
> Enter marks of 4 student: 6
> Enter marks of 5 student: 4
> Marks in the ascending order are:
> 4  4  6  8  9
```