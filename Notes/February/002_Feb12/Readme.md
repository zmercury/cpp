### Feb 12

### Inheritance 

#### 1. Single Inherirance 

> Syntax
```cpp
Class A {
    //Statements
}

Class B: public A {
    //Statements
}
```


#### 2. Multiple Inheritance 

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

#### 3. Multilevel
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

#### 4. Hierarchical

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

```mermaid
stateDiagram-v2
   [*] --> New
   New --> Ready: admitted
   Ready --> Running: scheduler dispatch
   Running --> Ready: interrupt
   Running --> Waiting: I/O or event wait
   Waiting --> Ready: I/O or event completion
   Running --> Terminated: exit
   Terminated --> [*]
```