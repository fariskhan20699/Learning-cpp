 /*
 02 Function Parameters

Notes:
-> A parameter is a variable used to receive data inside a function.
-> Parameters are written inside the parentheses `()` of a function.
-> A function can have one or multiple parameter.
-> When calling a function, the values passed to its parameters are called arguments.
-> Parameters allow the same function to work with different values.
-> Each parameter must have a data type.

Syntax
void functionName(dataType parameter) {
    // function body
}
 
Multiple Parameters
void functionName(dataType parameter1, dataType parameter2) {
    // function body
}
///////////////////////////////////////////////////////////////////////////////////////////////
*/
#include <iostream>
using namespace std;

void greet(string name) {
    cout<<"Hello, "<<name<<"!"<<endl;
}

void add(int a, int b) {
    cout<<"Sum = "<<a + b<<endl;
}

int main(){

    greet("Faris");

    add(10, 20);

    return 0;
}

/*
Practice Tasks:

Task 1:
Create a function named greet() that takes a name
as a parameter and prints a greeting message.

Example:
greet("Faris");
Output:
Hello, Faris!


Task 2:
Create a function named square() that takes an
integer as a parameter and prints its square.

Example:
square(5);
Output:
Square = 25


Task 3:
Create a function named add() that takes two integers
as parameters and prints their sum.

Example:
add(10, 20);
Output:
Sum = 30


Task 4:
Create a function named sum() that takes three integers
as parameters and prints their total.

Example:
sum(10, 20, 30);
Output:
Total = 60


Task 5:
Create a function named checkEvenOdd() that takes
an integer as a parameter and checks whether the
number is even or odd.

Example:
checkEvenOdd(8);
Output:
Even


Task 6:
Create a function named largest() that takes two
integers as parameters and prints the larger number.

Example:
largest(15, 10);
Output:
Largest = 15


Task 7:
Create a function named student() that takes three
parameters: name, age, and marks.
Print all three values.

Example:
student("Faris", 18, 90);
*/
