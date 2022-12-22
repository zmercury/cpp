### 1. What do you mean by Dynamic memory allocation? Explain how we can allocate dynamic memory in an array using new and delete operator in C++.

The process of allocation of memory during the program runtime is known as Dynamic Memory Allocation. A dynamic array is quite similar to a regular array, but its size is modifiable during program runtime. Dynamic Array elements occupy a contiguous block of memory. Dynamic Array grows its memory size by a certain factor when there is need. 

We can allocate the memory using **New** operator. 

### New Operator
The New operator requests for the memory allocation in heap. “Heap” memory, also known as “dynamic” memory, is an alternative to local stack memory. If the sufficient memory is available, it initializes the memory to the pointer variable and returns its address.

#### Syntax to Initialize the Memory
```cpp
pointer_variable = new datatype(value);
```

#### Example of New Operator
```cpp
#include<iostream>
using namespace std;

int main() {
	int x, n;

	cout << "Enter the number of items:" << "\n";
	cin >>n;
	
	int *arr = new int(n);
	cout << "Enter " << n << " items" << endl;

	for (x = 0; x < n; x++) {
		cin >> arr[x];
	}

	cout << "You entered: ";
	for (x = 0; x < n; x++) {
		cout << arr[x] << " ";
	}

	return 0;
}
```

#### Output
```md
> Enter the number of items: 5
> Enter 5 items: 1 2 3 4 5
> You entered: 1 2 3 4 5
```

#### Code explaination

1. Include the iostream header file into our program to use its functions.
1. Include the std namespace in our program in order to use its classes without calling it.
1. Call the main() function. The program logic should be added within the body of the function.
1. Declare two integer variables x and n.
1. Print some text on the console prompting the user to enter the value of variable n.
1. Read user input from the keyboard and assigning it to variable n.
1. Declare an array to hold a total of n integers and assigning it to pointer variable *arr.
1. Print a message prompting the user to enter n number of items.
1. Use a for loop to create a loop variable x to iterate over the items entered by the user.
1. Read the elements entered by the user and storing them in the array arr.
1. End of the body of the for loop.
1. Print some text on the console.
1. Use a for loop to create a loop variable x to iterate over the items of the array.
1. Print out the values contained in the array named arr on the console.
1. End of the body of the for loop.
1. The program must return value upon successful completion.
1. End of the body of the main() function.

And the allocated memory can be freed by using **Delete** operator.

### Delete Operator

The delete operator is used to de-allocated memory occupied by an object. The de-allocated memory can be used by operating system for other purposes.

#### Syntax for Delete operator
```cpp
delete pointer-variable;  
```

#### Example of Delete Operator
```cpp
#include<iostream>
using namespace std;

int main() {
	int x, n;

	cout << "How many numbers will you type?" << "\n";
	cin >>n;
	int *arr = new int(n);

	cout << "Enter " << n << " numbers" << endl;
	for (x = 0; x < n; x++) {
		cin >> arr[x];
	}

	cout << "You typed: ";
	for (x = 0; x < n; x++) {
		cout << arr[x] << " ";
	}

	cout << endl;

	delete [] arr;

	return 0;
}
```
#### Output
```md
> How many numbers will you type?
> 3
> Enter 4 numbers
> 2 4 6 7
> You typed: 2 4 6 7 
>
```

#### Code Explanation

1. Include the iostream header file in our program in order to use its functions.
1. Include the std namespace in our program in order to use its classes without calling it.
1. Call the main() function. The program logic should be added within the body of the function.
1. Declare two variables x and n of the integer data type.
1. Print some text on the console. The text will ask the user to state the number of numbers they will enter.
1. Read user input from the keyboard. The input value will be assigned to variable n.
1. Declare a pointer variable *arr. The array arr will reserve some memory to store a total of n integers.
1. Print a message on the console prompting the user to enter n numbers.
1. Create a for loop and the loop variable x to iterate over the numbers entered by the user.
1. Read the numbers entered by the user and storing them in the array arr.
1. End of the body of the for loop.
1. Print some text on the console.
1. Use a for loop and the loop variable x to iterate over the contents of array arr.
1. Print out the values of the array arr on the console.
1. End of the body of the for loop.
1. Print an empty line on the console.
1. Free up the memory of the array arr.
1. The program will return value when it completes successfully.
1. End of the body of the main() function.

