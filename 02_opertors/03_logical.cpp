
/* &&  -> Both conditions must be true
   ||  -> At least one condition must be true
   !   -> Reverses the condition
*/
/////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main(){

    bool a = true;
    bool b = false;

    // Logical AND (&&)
    cout<<"a && b = "<<(a && b)<<endl;

    // Logical OR (||)
    cout<<"a || b = "<<(a || b)<<endl;

    // Logical NOT (!)
    cout<<"!a = "<<(!a)<<endl;
    cout<<"!b = "<< (!b)<<endl;

    return 0;
}

////////////////////////////////////////////////////////////////////////////
/*
Practice Task: Create two boolean variables isStudent and hasIDCard. 
               Use logical operators to check different combinations.

Requirements:

=> && operator use in conditions and print result.
=> || operator use in condition and print result.
=> !  operater use in varaible and print the opposite result.
=> use the  two bool varaibles:
    -> bool isStudent = true;
    -> bool hasIDCard = false;
*/