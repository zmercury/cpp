### Feb 20

## What is Ambiguity?
It is a situation in which something has more one possible meaning and may therefore cause confussion. <br>
In case of multiple inheritance, a single class is derived form two or more parents classes so there maybe possibily that two or more parents have a member functions with same name. <br>
If the object of derived class needs to access one of the same named member function from the base class then it results ambiguity in our program. This program can be fixed by using scope resolution operator (::) during the time of function call.

### Two Problem that demonstrated (Ambiguity)

### 1. 

```cpp
#include <iostream>
using namespace std;

class GrandFather{
    public:
        void hi() {
            cout << "Hi, Grandpa!" << endl;
        }
};

class Dad: public GrandFather {
    public:
        void namaste() {
            cout << "Hi, Grandpa!" << endl;
        }
};

class Mom {
    public:
        void namaste() {
            cout << "Namaste!" << endl;
        }
};

class Son: public Mom, public Dad {
    public: 
        void me() {
            cout << "Hello Myself!" << endl;
        }
};

int main() {
    Son st;

    st.hi();
    st.namaste();
    st.namaste();
    st.me();

    return 0;
}
```

### 2.

