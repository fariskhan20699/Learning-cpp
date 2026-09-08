/*03 RETURN VALUE

NOTES:
-> A return value is the value that a function sends back to the place where the function was called.
-> he "return" keyword is used to send a value back.
-> A function that returns a value must have a return type such as int, float, double, string, etc.
"void" means the function does not return a value.

Syntax:
dataType functionName() {
    return value;
}

->  The returned value can be stored in a variable or directly used in cout or another calculation.
*/
//////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int getNumber() {
    return 50;
}

int add(){
    int a = 10;
    int b = 20;

    return a + b;
}

int square() {
    int number = 5;

    return number * number;
}


int main() {

    int number = getNumber();
    cout<<"Number = "<<number<<endl;

    int sum = add();
    cout<<"Sum = "<<sum<<endl;

    int result = square();
    cout<<"Square = "<<result<<endl;

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////
/*
PRACTICE TASKS

Task 1:
Create a function getAge() that returns an integer.
Store the returned value in a variable and print it.


Task 2:
Create a function getNumber() that returns 100.
Print the returned value in main().


Task 3:
Create a function multiply() that multiplies two
fixed numbers and returns the result.


Task 4:
Create a function square() that takes no parameters
and returns the square of a fixed number.


Task 5:
Create a function largest() that compares two fixed
numbers and returns the larger number.


Task 6:
Create a function calculate() that performs a calculation
and returns the final result.


NOTE:
For now, do NOT use parameters.
Parameters + return values will be practiced together next.
*/