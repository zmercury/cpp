### 1. How constructor and destructor are called when the object is created and destoryed.

As constructor is the first function called by the compiler when an object is created and the destructor is the last class member called by the compiler for an object. If the constructor and destructor are not declared by the user, the compiler defines the default constructor and destructor of a class object.
Let’s see a code to get the proper idea of how constructor and destructor are called:
First, we will create a class with single parametrized constructors and a destructor. Both of them contain print statements to give an idea of when they are called.

```cpp
#include <iostream>
using namespace std;

class MyClass {
public:
  // Constructor
  MyClass() {
    cout << "Constructor called" << endl;
  }

  // Destructor
  ~MyClass() {
    cout << "Destructor called" << endl;
  }
};

int main() {
  // Create an object of the MyClass class
  MyClass* p = new MyClass();

  // Destroy the object
  delete p;

  return 0;
}
```


#### Output

```md
> Constructor called
> Destructor called
```

### Conclusion

Certainly! Here is a short summary of what the code does:

The code defines a class called MyClass with a constructor and a destructor.
The main function creates an object of the MyClass class using the new operator and assigns it to a pointer p. This causes the constructor for the MyClass class to be called.
The main function then destroys the object using the delete operator. This causes the destructor for the MyClass class to be called.
The main function returns 0 to indicate that the program ran successfully.
The purpose of the constructor and destructor in this example is to print a message to the console when the object is created and destroyed. The constructor prints the message "Constructor called", and the destructor prints the message "Destructor called".