## 1) What is Copy Constructor? Explain how and when to use copy constructor in a program?

The copy constructor is a constructor which creates an object by initializing it with an object of the same class, which has been created previously. The copy constructor is used to −
- Initialize one object from another of the same type.
- Copy an object to pass it as an argument to a function.
- Copy an object to return it from a function.

If a copy constructor is not defined in a class, the compiler itself defines one.If the class has pointer variables and has some dynamic memory allocations, then it is a must to have a copy constructor. The most common form of copy constructor is shown below.

#### Syntax of user-defined copy constructor

```cpp
classname (const classname &obj) {
   // body of constructor
}
```

### i) How to use Copy Constructor

```cpp
//Simple program that prints the two integer value using user-defined copy constructor in C++

#include<iostream>
using namespace std;
class Demo {
   private:
        int num1, num2;
   public:
        Demo(int n1, int n2) {
            num1 = n1;
            num2 = n2;
        }
        Demo(const Demo &n) {
            num1 = n.num1;
            num2 = n.num2;
        }
        void display() {
            cout<<"num1 = "<< num1 <<endl;
            cout<<"num2 = "<< num2 <<endl;
        }
};
int main() {
   Demo obj1(10, 20);
   Demo obj2 = obj1;

   obj1.display();
   obj2.display();

   return 0;
}
```

#### Output

```md
> num1 = 10
> num2 = 20

> num1 = 10
> num2 = 20
```

### Code explaination on how to use Copy Constructor

1. Class called "Demo" is created.
2. Class "Demo" contains a normal parameterized constructor and a copy constructor. In addition to these, there is a function that displays the values of num1 and num2.
3. In the function main(), the class obj1 is initialized using a parameterized constructor. 
4. But, The obj2 is initialized using a copy constuctor and the values of obj1 are copied into obj2. 
5. Finally, The value of obj1 and obj2 are printed on the console by calling the display function created in Class Demo.

### ii) When to use Copy Constructor?

The default copy constructor is a shallow copy(i.e A    n object is created by simply copying the data of all variables of the original object). That is it is a straight memory copy of the object. However, if any of the properties in the object are pointers to other objects, or memory, only the pointers are copied. So if any of that data changes at a later time, the copied object may be corrupt.

So, we need to define our own copy constructor only if an object has pointers or any runtime allocation of the resource.

