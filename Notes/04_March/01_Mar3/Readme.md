### Mar 3

## Polymorphism

### 1. Overloading 
```cpp
add(int a, int b);
add(float a, float b);

//function call
add(1,2);
add(1.2,2.3);
```

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