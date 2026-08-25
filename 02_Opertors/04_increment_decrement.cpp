/* ++ is called increment operator.
  It increases a variable's value by 1.

   -- is called decrement operator.
   It decreases a variable's value by 1.

Example:
  -> number++;  -> number = number + 1
  -> number--;  -> number = number - 1

Impotant Note: 
  -> First learn the basic use of ++ and --.
  -> Prefix and postfix forms (++number and number++)
  ->will be covered separately later.
*/
//////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main() {

    int number = 10;
    cout<<"Original value: "<<number<<endl;

    number++;
    cout<<"After increment: "<<number<<endl;

    number--;
    cout<<"After decrement: "<<number<<endl;

    return 0;
}
////////////////////////////////////////////////////////////////////
/*
////////////
//Output///
///////////

Original value: 10
After increment: 11
After decrement: 10

*/
//////////////////////////////////////////////////////////////////
/*
Practice task:
Create a program with an integer variable score = 50.
Print its original value, increase it by 1 using ++, print it again,
then decrease it by 1 using -- and print the final value.
*/
////////////////////////////////////////////////////////////////