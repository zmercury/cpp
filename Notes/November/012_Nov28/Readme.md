### November 28

```cpp
//Do While Syntax

initialization;
do{
	//statement
	//increment/ decrement
} while(Condition);


//While Syntax

initialization;
while(Condition){
	//statement
	//increment/ decrement
}

///for syntax

for(initialization; condition; increment/decrement)
{
	//statement
}
```

### 1. 

```cpp
#include <iostream>
using namespace std;

class Number_Loop
{
    int a = 1;

public:
    void display()
    {
        do
        {
            cout << a << endl;
            a++;
        } while (a <= 10);
    }
};

int main()
{
    Number_Loop nl1;
    nl1.display();
    return 0;
}
```

### 2

```cpp
#include <iostream>
using namespace std;

class Number_Demo
{
    int b = 30;

public:
    void display()
    {
        while (b >= 1)
        {
            cout << b << endl;
            b-=2; //b=b-2;
        }
    }
};

int main()
{
    Number_Demo nd1;
    nd1.display();
    return 0;
}
```

### 3

```cpp
#include <iostream>
using namespace std;

class Mul_Table
{
    int a;

public:
    void input()
    {
        cout << "Enter a number to get its multiplication table :";
        cin >> a;
    }
    void output()
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << a << " x " << i << " = " << (a * i) << endl;
        }
    }
};

int main()
{
    Mul_Table mt1;
    mt1.input();
    mt1.output();
    return 0;
}
```