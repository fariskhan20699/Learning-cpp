/*
    Nested if/else:

    -> A nested if is an if statement inside another if statement.
    -> It is used when a second condition depends on the first condition.

    Example:
    
    if (condition1){
        if (condition2){
            // code
        }
        else{
            // code
        }
    }
    else{
        // code
    }
*/
///////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main(){

    int age = 20;
    bool hasID = true;

    // Nested if means using an if statement
    // inside another if statement.

    if(age >= 18){

        if(hasID){
            cout << "You can enter." << endl;
        }
        else{
            cout << "You need an ID." << endl;
        }

    }
    else{
        cout << "You are underage." << endl;
    }

    return 0;
}

/*
Practice Task:

-> Take age and marks from the user.
-> If age is 18 or above, check the marks.
-> If marks are 50 or above, print "Eligible".
-> Otherwise, print "Failed".
-> If age is below 18, print "Underage".
*/
///////////////////////////////////////////////////////////////////////