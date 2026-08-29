/*
WHILE LOOP - NOTES

A while loop repeatedly executes a block
of code as long as the given condition
is true.

Syntax:
while (condition){
    // code to execute
}

Important:
-> Condition is checked BEFORE each iteration.
-> If the condition is false initially,
   the loop will not execute even once.
-> Make sure the loop variable is updated,
   otherwise you may create an infinite loop.
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
int main(){
 

    int i = 1;
    while (i <= 5){
        cout << i << endl;
        i++;
    }

    int num = 1;
    while (num <= 10){
        cout << num << " ";
        num++;
    }
    cout << endl;


    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
    // 3. PRACTICE TASKS  
/*
    Task 1:
    Print numbers from 1 to 20 using a while loop.

    Task 2:
    Print even numbers from 2 to 20.

    Task 3:
    Print odd numbers from 1 to 19.

    Task 4:
    Take a number from the user and print its
    multiplication table using a while loop.

    Task 5:
    Take a number from the user and calculate
    the sum of numbers from 1 to that number.

    Task 6:
    Take a number from the user and count how
    many digits it contains.

    Task 7:
    Take a number from the user and reverse it
    using a while loop.

    Task 8:
    Keep asking the user to enter a number until
    they enter 0.
*/