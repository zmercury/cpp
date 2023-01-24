## Digital Logic

### 1. Define the Number System with an example
A number system is a system for representing numbers using a set of symbols and rules for combining them. An example of a number system is the decimal number system, which uses the symbols 0, 1, 2, 3, 4, 5, 6, 7, 8, and 9, and the rule that the position of a digit determines its value (e.g., the number "42" represents 4 tens and 2 ones). This is the most common number system used in everyday life.

### 2. Define codes such as ASCII, Gray, BCD, and XS-3 with examples
ASCII (American Standard Code for Information Interchange) is a code that assigns a unique number to each of the characters used in the English language, including letters, numbers, and special characters. For example, the letter "A" is represented by the number 65 in ASCII, while the number "0" is represented by the number 48.

Gray code is a code that assigns a unique binary code to each number such that only one bit changes at a time as the numbers increase. It is used in some digital circuits to minimize the number of changes in the signal. For example, the binary representation of 0 is 000 and the gray code representation is 000; the binary representation of 1 is 001 and the gray code representation is 001; the binary representation of 2 is 010 and the gray code representation is 011, the binary representation of 3 is 011 and the gray code representation is 010

BCD (Binary-coded decimal) is a code that represents decimal numbers using four bits for each digit. For example, the decimal number "1234" would be represented as 0001 0010 0011 0100 in BCD.

XS-3 is a code that was created to minimize the number of bits required to represent a decimal digit. It uses 3 bits to represent decimal digits from 0 to 9. For example, the decimal number "5" would be represented as "101" in XS-3.

### 3. Perform the signed bit addition using 2’s complement in the given value: a) 50,20 b) 10,30 c) 150,500
a) To perform signed bit addition using 2's complement on the values 50 and 20:

50 in binary is 0011 0010
20 in binary is 0001 0100

To add these numbers using 2's complement, we simply add the binary values as if they were unsigned numbers.

0011 0010 (50)
+0001 0100 (20)

0011 0110 (70)

So the result of adding 50 and 20 using 2's complement is 70.

b) To perform signed bit addition using 2's complement on the values 10 and 30:

10 in binary is 0000 1010
30 in binary is 0001 1110

To add these numbers using 2's complement, we simply add the binary values as if they were unsigned numbers.

0000 1010 (10)
+0001 1110 (30)

0010 1100 (44)

So the result of adding 10 and 30 using 2's complement is 44.

c) To perform signed bit addition using 2's complement on the values 150 and 500:

150 in binary is 1001 0110
500 in binary is 0001 1111 0100

To add these numbers using 2's complement, we simply add the binary values as if they were unsigned numbers.

1001 0110 (150)
+0001 1111 0100 (500)

0101 0000 1010 (650)

So the result of adding 150 and 500 using 2's complement is 650.

Please note that the operation performed here is unsigned binary addition, 2's complement is used to represent signed numbers and to perform arithmetic operations such as addition and subtraction on them.

### 4. Explain Boolean Logic and Boolean Algebra
Boolean logic is a type of mathematical system that is based on binary logic, which uses only two values, true and false. In Boolean logic, statements are represented by variables (usually denoted by letters such as A, B, and C) that can take on one of two values, true or false. Boolean logic operations include AND, OR, NOT, NAND, NOR, XOR and XNOR. These operations can be used to create more complex logical expressions.

Boolean algebra is a branch of algebra that deals with operations on binary variables and logical expressions. Boolean algebra is based on Boolean logic, but also includes additional rules and theorems for manipulating logical expressions. It uses the same logical operators as Boolean logic, but also includes additional rules for simplifying logical expressions, such as the commutative, associative and distributive properties.

For example, the expression A AND B (A ∧ B) is true only if both A and B are true. The expression A OR B (A ∨ B) is true if either A or B or both are true. The expression NOT A (¬A) is true if A is false and vice versa.

Boolean algebra is used in many fields, including computer science, electronics, and digital logic design. It is used to simplify and optimize digital circuits, such as those found in computers, phones, and other electronic devices.

In summary, Boolean logic deals with the manipulation of true and false values using logical operators, while Boolean algebra is the branch of algebra that deals with the manipulation of logical expressions by following the laws and theorems of Boolean logic.

