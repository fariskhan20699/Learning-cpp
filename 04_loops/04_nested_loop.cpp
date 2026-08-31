/*
    NESTED LOOPS  C++ NOTES
    A nested loop is a loop inside another loop.

    Structure:
    for(initialization; condition; update){
        for(initialization; condition; update){

           // inner loop

        }
    }

    IMPORTANT:
    -> Outer loop controls the main repetitions.
    -> Inner loop runs completely for every iteration
       of the outer loop.
    -> If outer loop runs 3 times and inner loop runs
       4 times, the inner loop executes 3 * 4 = 12 times.

    Example:

    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 4; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    Output:
    * * * *
    * * * *
    * * * *

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
int main(){
    // EXAMPLE 1: Simple Nested Loop

    cout<<"Example 1: 3 x 4 Pattern\n\n";
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 4; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // EXAMPLE 2: Increasing Triangle

    cout<<"\nExample 2: Increasing Triangle\n\n";
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  // PRACTICE TASKS

    /*
        TASK 1:
        Print this pattern:

        * * * *
        * * * *
        * * * *


        TASK 2:
        Print:

        1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5    
    */
