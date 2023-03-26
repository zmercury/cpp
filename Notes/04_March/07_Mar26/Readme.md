### Mar 26

### What is an operator?
**Ans**: Operator is a symbol which performs actions on oprands. In C++, we use operators like +,-,*,%,/,>,< etc. It simply commands the compiler to perform the specific mathematical, logical operations or some other special calculations. 


### What is operator overloading?
**Ans**: Operator overloading is a special functionality that can be used in preexisting function or operations. It provides a mechanism of providing special meaning to an operator which is known as operator overloading.

For example: <br>
1. for (+ operator), It is used to concatinate strings in c++.

### What are the example of operator overloading?
**Ans**: <br> 
1. It makes the program easy to understand. 
1. It provides similar support to built-in types and user defined types. 

We can generalize the noteation for complex number like if (a and b are two complex numbers, a.add(b); a+b)

### Disadvantages
1. Only preexisted operators can be overloaded, new operators cannot be overloaded.
1. Precedence order of operators cannot be changed.
1. Argument sequence, logical patters sometimes cannot be changes. sometimes, we cannot preform x + y + z for some data types

### Rules of operator overloading. !important
1. There must be a user-defined class object for at least one of the oprands
1. We can overload existing operators 

Some of the operators cannot be overloaded<br>
1. Scope resolution operator (::)
1. sizeof();
1. Ternary Operators ( ? :)
1. 