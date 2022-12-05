### December 5

## Class & Object

#### Syntax of Class
```cpp
Access_Modifier class className {
    //data member(s)
    //member function(s)
}
```
```cpp
// Example

class number {
    public:
        int a;
        void getInput() {
            cout << "Enter any number: ";
            cin >> a;
        }
}
```

#### Syntax of Object
```cpp
className obj;
```

```cpp
//Example

number n1;
```

### Types of Variable 

#### 1. Local
#### 2. Static
#### 3. Instance

```cpp
class Student {
    int age;

    void input() {
        cout << "Enter age: ";
        cin >> age;
    }
};

class Student::input {
        cout << "Enter age: ";
        cin >> age;
}
```

Scope resolution operator 
