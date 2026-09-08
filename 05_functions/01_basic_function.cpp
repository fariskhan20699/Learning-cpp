/*
Notes:
-> A function is a block of code that performs a specific task.
-> A function is created using a return type, function name, and ().
-> void means the function does not return any value.
-> A function runs only when it is called.
-> In this basic function, we use no parameters.

    Syntax
    void functionName() {
        // code
    }
*/
///////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std; 
//function...
void greet(){ 
    cout << "Hello, Welcome to C++!"<<endl; 
} 

int main(){
    greet(); 
    return 0; 
}

//////////////////////////////////////////////////////////////////////////////////////////
/*
Practice Tasks

Task 1:
Create a function hello() that prints Hello World.

Task 2:
Create a function welcome() that prints Welcome to Programming.

Task 3:
Create a function intro() that prints your name and your field.

Task 4:
Create a function numbers() that prints numbers from 1 to 10.

Task 5:
Create three functions:

first()
second()
third()

Call all three functions from main().
*/