/*
DO-WHILE LOOP - NOTES 
-> A do-while loop repeatedly executes a block of 
   code as long as the given condition is true. 
-> Syntax: 
    do{ 
        // code to execute 
    }while (condition); 
-> Important: 
-> The code inside the do block executes FIRST. 
-> The condition is checked AFTER each iteration. 
-> A do-while loop executes at least ONCE, 
   even if the condition is false initially. 
-> Make sure the loop variable is updated, 
   otherwise you may create an infinite loop. 
*/
////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;
int main(){
    int i = 1;
    do{
        cout << i << endl;
        i++;
    }while (i <= 5);


    int num = 1;
    do{
        cout << num << " ";
        num++;
    }while (num <= 10);
    cout << endl;

    int x = 10;
    do{
        cout << "This code executes once." << endl;
        x++;
    }while (x < 10);
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////

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
/////////////////////////////////////////////////////////////////////////////////////////////////////