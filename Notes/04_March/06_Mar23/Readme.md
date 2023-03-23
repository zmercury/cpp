### Mar 23

```cpp
#include <bits/stdc++.h>
using namespace std;

class Marks {
    int marks;

    public:
        void getData(){
            cout << "Enter marks";
            cin >> marks;
        }

        void operator++() {
            marks++;
        }

        void displayMark() {
            cout << "Mark: " << marks << endl;
        }
};

int main() {
    Marks marks;

    marks.getData();
    marks.operator++();
    ++marks;
    marks.displayMark();

    return 0;
}
```

```cpp
#include <bits/stdc++.h>
using namespace std;

class Marks {
    int marks;

    public:
        void getData(){
            cout << "Enter marks";
            cin >> marks;
        }

        Marks operator++() {
            marks++;
            return *this;
        }

        void displayMark() {
            cout << "Mark: " << marks << endl;
        }
};

int main() {
    Marks marks;

    marks.getData();
    marks.operator++();
    ++marks;
    marks.displayMark();

    return 0;
}
```


