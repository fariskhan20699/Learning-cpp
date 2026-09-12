
//Short Notes: 
// C++ String Class
// The string class is used to store and work with text.
// It is easier and safer to use than a C-style character array.
//
// Common string functions:
// length()  -> returns the number of characters
// empty()   -> checks whether the string is empty
// at()      -> accesses a character at a specific index
// append()  -> adds text to the end of a string
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;

    cout<<"Enter your name: ";
    cin>>name;

    cout<<"Your name is: "<<name<<endl;
    cout<<"Length: "<<name.length()<<endl;

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Practice Task
Create a program that:
    1. Create a string variable to store the user's first name.
    2. Take the first name as input.
    3. Display the name.
    4. Display the length of the name using length().
    5. Check whether the string is empty using empty().
    6. Display the first character of the name using at().
    7. Add " Khan"to the name using append().
    8. Display the updated name.

Challenge:
    -> Create two string variables:
        ->First Name
        ->Last Name

Combine them into one full name and display the full name.
**Hint:** You can use `+` to combine strings.
*/