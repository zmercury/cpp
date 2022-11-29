### November 29

Jump Statement 
-

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; 1 <= 10; i++) {
        cout << i << endl;
    }
}
```


```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; 1 <= 10; i++) {
        if(i==4) {
            break;
        }
            cout << i << endl;
    }
}
```

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; 1 <= 10; i++) {
        if(i==4) {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}
```