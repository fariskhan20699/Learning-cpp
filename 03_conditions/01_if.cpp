/*
    if Statement:
    - Used to make decisions in a program.
    - The code inside if runs only when the condition is true.

    Syntax:
    
    if (condition) {
        // code to execute
    }
*/
/////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
int main() {

    int age = 18;

    // The if statement executes a block of code
    // only when the condition is true.

    if (age >= 18){
        cout<<"You are eligible."<<endl;
    }
    // Guess the Output -> if(age >= 18);
    return 0;
}

/*
Practice Task:
Create a program that takes a number from 
the user and prints "Positive number" only 
if the number is greater than 0.
*/
////////////////////////////////////////////////////////////////