/*
    Ternary Operator:
    The ternary operator is a short way to write a simple condition.

    Syntax:
    condition ? value_if_true : value_if_false;

    Example:
    age >= 18 ? "Adult" : "Minor";

    If the condition is true, the first value is selected.
    If the condition is false, the second value is selected.

    The ternary operator uses three parts:
    1. Condition
    2. Value if condition is true
    3. Value if condition is false

    Note:
    Ternary operator is also called the conditional operator.
*/
////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
int main() {

    int age = 20;

    string result = (age >= 18)? "Adult" : "Minor";

    cout<<"Result: "<<result<<endl;

    return 0;
}

//////////////////////////////////////////////////////////
/*
Practice Task:
    -> Create a program with an integer variable marks = 75.
    -> Use the ternary operator to check whether the student passed or failed.
    -> If marks are 50 or above, print "Pass", otherwise print "Fail".
*/
/////////////////////////////////////////////////////////