/*
    if/else Statement:

    -> if runs when the condition is true.
    -> else runs when the condition is false.
    -> It provides two possible paths.

    Syntax:
    if (condition){
        // code if condition is true
    }

    else{
        // code if condition is false
    }
*/
/////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
int main() {

    int age = 17;

    /*
       if/else is used to choose between two conditions.
       If the condition is true, the if block runs.
       Otherwise, the else block runs.
    */

    if (age >= 18){
        cout<<"You are an adult."<<endl;
    }
    else{
        cout<<"You are not an adult."<<endl;
    }

    return 0;
}

/*
Practice Task: 
Take a number from the user and check whether it is even or odd using if/else.
*/