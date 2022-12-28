### 1. How constructor and destructor are called when the object is created and destoryed.

As constructor is the first function called by the compiler when an object is created and the destructor is the last class member called by the compiler for an object. If the constructor and destructor are not declared by the user, the compiler defines the default constructor and destructor of a class object.
Let’s see a code to get the proper idea of how constructor and destructor are called:
First, we will create a class with single parametrized constructors and a destructor. Both of them contain print statements to give an idea of when they are called.

```cpp
#include <iostream>
using namespace std;

class class_name{
    // declaring private class data members 
    private:
        int a,b;
    
    public: 
    
        // declaring Constructor
        class_name(int aa, int bb)
        {
            cout<<"Constructor is called"<<endl;
            a = aa;
            b = bb;
            
            cout<<"Value of a: "<<a<<endl;
            cout<<"Value of b: "<<b<<endl;
            cout<<endl;
        }
    
        // declaring destructor
        ~class_name()
        {
        cout<<"Destructor is called"<<endl;
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
    }  
};
int main() 
{
    // creating objects of class using parameterized constructor
    class_name obj(5,6);
    
    return 0;
}
```


#### Output

```md
> Constructor is called
> Value of a: 5
> Value of b: 6

> Destructor is called
> Value of a: 5
> Value of b: 6
```

In the above code, we have created a class with constructor and destructor. In the main function, an object uses a parametric constructor, and when the program ends the destructor is automatically called by the compiler and we get the values of our variables.

### Conclusion

- Constructor and Destructor are the special member functions of the class which are created by the C++ compiler or can be defined by the user.
- Constructor is called by the compiler whenever the object of the class is created, it allocates the memory to the object and initializes class data members.
- A destructor is called by the compiler when the object is destroyed and its main function is to deallocate the memory of the object.
- Constructors have the same as of class while destructors have the same name of the class with the prefix a tilde (~) operator.
- Both Constructor and destructor can be defined as public, private, or protected. But it is better to declare the constructor as public.
- The constructor can have parameters but the destructor doesn’t receive any parameters.