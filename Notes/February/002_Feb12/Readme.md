### Feb 12

### Inheritance 

#### Single Inherirance 

> Syntax
```cpp
Class A {
    //Statements
}

Class B: public A {
    //Statements
}
```


#### Multiple Inheritance 

> Syntax

```cpp
Class A {
    //Statements
    //Functions or Data Members
}

Class B {
    //Statements
    //Functions or data members 
}

Class C : public A,B {
    //Statements 
}
```

#### Multilevel
> Syntax

```cpp
Class A {
    //Statements
    //Functions or Data Members
}

Class B: public A {
    //Statements
    //Functions or data members 
}

Class C : public B {
    //Statements 
}
```

#### Hierarchical

```cpp
Class A {
    //Statements
    //Functions or Data Members
}

Class B: public A {
    //Statements
    //Functions or data members 
}

Class C : public A {
    //Statements 
}

Class D: public B {
    //Statements
}

Class E: public B {
    //Statements
}

Class F: public C {
    //Statements
}
```