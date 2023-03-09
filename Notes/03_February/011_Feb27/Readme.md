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

    cout << "Displaying the data of student(s): " << endl;

    for (int i = 0; i < n; i++) {
        stu[i].showData();
    }

    return 0;
}
```

```md
# Output

> Enter the number of students: 2
> Enter roll number: 1
> Enter name: Ram
> Enter roll number: 2
> Enter name: Shyam
> Displaying the data of student(s): 
> Roll no. = 1
> Name: Ram
> Roll no. = 2
> Name: Shyam
```

## Static Data Member

Declaration of Static Data Member is done inside the class  <br>
```cpp
static int a;
```
Definition is done outside the class. <br>
```cpp
int A:: a = 45;
```

### Static Data Members without using static member function

```cpp
#include <bits/stdc++.h>
using namespace std;

class StaticDemo {
    public:
        static int a;  //Declaration
};

int StaticDemo::a = 5; //Defination

int main() {
        cout << "a = " << StaticDemo::a;
        return 0;
}
```

```md
# Output

> a = 5
```

### Static Data Members using static member function

```cpp
#include <bits/stdc++.h>
using namespace std;

class StaticDemo {
    public:
        static int a;  //Declaration
        
        static void output() {
            cout << "a = " << a << endl;
        }
};

int StaticDemo::a = 5; //Defination

int main() {
    StaticDemo::output();

    return 0;
}
```
