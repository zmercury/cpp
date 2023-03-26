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


### File Handeling

```cpp
#include <iostream>
//provides ofstream and ifstream functionality
#include <fstream>
using namespace std;

int main() {
    //used to create a new file and write contents to it
    ofstream myFile("./tempfiles/test.txt");

    myFile << "Hello, world!" << endl;
    myFile.close();
    
    return 0;
}
```

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string stringOne;
    ifstream myFile("./tempfiles/hello.txt");

    while (getline(myFile, stringOne)) {
        cout << stringOne;
    }

    myFile.close();

    return 0;
}
```

### Fstream
This header file used for ofstream and ifstream in the program

### ofstream 
Used to create and write content in a file

### ifstream
opening a file by name and display the data

### getline
to read data from the file line by line by making use of string variable defined 

### close
closing the file that was opened to write the file contents into the file 


```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream filestream("helloThree.txt");

    if(filestream.is_open()) {
        filestream << "Line 1" << endl;
        filestream << "Line 2" << endl;
        filestream.close();
    } else {
        cout << "File has not been created" << endl;
    }

    return 0;
}
```