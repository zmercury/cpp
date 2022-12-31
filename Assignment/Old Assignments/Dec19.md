### December 19


#### 1. Differenciate between Default Arguments and Reference Arguments

<table width="100%">
<tr>
<th width="50%">Default Argument</th><th width="50%">Reference Argument</th></tr>
<tr>
<td width="50%"> A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the calling function doesn't provide a value for the argument </td>
<td width="50%"> A reference parameter is a reference to a memory location of a variable </td>
</tr>
<tr>
<td width="50%"> Changes made inside the function is not reflected on the other functions.</td>
<td width="50%">Changes made inside the function is also reflected outside the function once it is called.</td>
</tr>
<tr>
<td width="50%">Orginal Value is not modified</td>
<td width="50%">Orginal Value is modified</td>
</tr>
<tr>
<td width="50%">Value of the variable is passed directly</td>
<td width="50%">Pointer variable is required to store the address of the variable</td>
</tr>
<tr>
<td width="50%">
Syntax:

```cpp
int sum(int x, int y, int z = 0, int w = 0){...}
```
</td>
<td width="50%">
Syntax:

```cpp
int &ref=a;
```
</td>
</tr>
</table>

#### 2. How default argument is differ from reference argument.


In C++, default arguments are arguments that are automatically assigned a default value if the caller of the function does not provide a value for them. Default arguments allow you to specify default values for function parameters, which can make the function easier to use and more flexible.

On the other hand, reference arguments are arguments that are passed to a function by reference, rather than by value. When a function is called with a reference argument, the function can modify the original variable that was passed to it, rather than just working with a copy of the value.

