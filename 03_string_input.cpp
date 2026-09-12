//Short Notes
// String Input
// cin >> reads only one word.
// getline() reads a complete line, including spaces.
//
// Example:
// cin >> name;
// Input: Muhammad Faris
// Result: Muhammad
//
// getline(cin,name);
// Input: Muhammad Faris
// Result: Muhammad Faris
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
using namespace std;

int main(){
    string fullName;
    cout<<"Enter your full name: ";
    getline(cin,fullName);

    cout<<"Your full name is: "<<fullName<<endl;
    cout<<"Length: "<<fullName.length()<<endl;

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Practice Task
Create a program that:

1. Create a string variable to store the user's full name.
2. Take the full name as input using getline().
3. Display the full name.
4. Ask the user to enter their city.
5. Take the city name using getline().
6. Display the city name.
7. Display the length of the full name.
8. Display the length of the city name.

Challenge

Create a program that takes:

* Full name
* City
* University name

Then display all three values in a formatted output.

**Rule:** Use getline() for all three inputs.
*/
