/*
    switch Statement:

    -> Used to select one block from multiple choices.
    -> The value is compared with each case.
    -> break stops the switch after a matching case.
    -> default runs when no case matches.

    Syntax:

    switch(expression){
        case value:
            // code
            break;

        default:
            // code
    }
*/
///////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main(){

    int day = 3;

    // switch is used when we need to choose
    // one option from multiple fixed values.

    switch(day){

        case 1:
            cout<<"Monday"<<endl;
            break;

        case 2:
            cout<<"Tuesday"<<endl;
            break;

        case 3:
            cout<<"Wednesday"<<endl;
            break;

        default:
            cout<<"Invalid day"<<endl;
    }

    return 0;
}


/*
Practice Task: 
Take a number from 1 to 7 and use switch to print the corresponding day 
of the week. Print "Invalid day" for any other number.
*/