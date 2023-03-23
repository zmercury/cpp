### Mar 22


## Encapsulation

### Explain the idea of setter and getter with suitable example.
**Ans**: `

```cpp
#include <bits/stdc++.h>
using namespace std;

class Students {
    int marks;

    public:
        void inputMarks(int a) {
            marks = a;
        }

        int displayMarks() {
            return marks;
        }
};

int main() {  
    Students std;

    std.inputMarks(56);

    cout << "Marks = " << std.displayMarks();

    return 0;
}
```