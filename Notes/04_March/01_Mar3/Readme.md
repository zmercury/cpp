### Mar 3

## Polymorphism

### 1. Overloading 


### 2. Overriding
The process of redefining the existing data members present in superClass from a base class using inheritance.

```cpp
superClass{
    methodOne() {
        cout << "Hi";
    }
};

subClass: public superClass{
    methodOne(){
        cout << "Hello";
    }
};
```