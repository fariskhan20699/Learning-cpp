
/*
FOR LOOP - NOTES

A for loop repeatedly executes a block of code
as long as the given condition is true.

Syntax:
for(initialization; condition; update){
    // code to execute
}

Important:
-> Initialization runs only ONCE at the beginning.
-> The condition is checked BEFORE each iteration.
-> The update runs AFTER each iteration.
-> If the condition is false initially, the loop
   will not execute even once.
-> Make sure the loop variable is updated correctly,
   otherwise you may create an infinite loop.
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main(){

    // Basic For Loop
    for(int i = 1; i <= 5; i++){
        cout << i << endl;
    }

    // Print Even Numbers from 2 to 10
    for(int even = 2; even <= 10; even += 2){
        cout << even << " ";
    }
    cout << endl;

    // Print Odd Numbers from 1 to 10
    for(int odd = 1; odd <= 10; odd += 2){
        cout << odd << " ";
    }
    cout << endl;

    // For Loop Does Not Execute if Condition is False
    for(int x = 10; x < 10; x++){
        cout << "This code will not execute." << endl;
    }

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////
// PRACTICE TASKS

/*
Task 1:
Print numbers from 1 to 20 using a for loop.

Task 2:
Print even numbers from 2 to 20.

Task 3:
Print odd numbers from 1 to 19.

Task 4:
Take a number from the user and print its
multiplication table using a for loop.

Task 5:
Take a number from the user and calculate
the sum of numbers from 1 to that number.

Task 6:
Take a number from the user and calculate
its factorial using a for loop.

Task 7:
Take a number from the user and count
how many digits it has.

Task 8:
Take a number from the user and check whether
it is a prime number using a for loop.

Task 9:
Print the following pattern:

*
**
***
****
*****

Task 10:
Print numbers from 10 to 1 using a for loop.
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////
