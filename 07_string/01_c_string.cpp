#include <iostream>
using namespace std;

int main(){
    char name[20];

    cout<<"Enter your name: ";
    cin>>name;

    cout<<"Your name is: "<<name<<endl;

    return 0;
}

/*
### Practice Task

Create a C-style string program that:

1. Create a character array to store a city name.
2. Take the city name as input from the user.
3. Display the city name.
4. Use `strlen()` to find the number of characters in the city name.
5. Ask the user to enter a character.
6. Search for that character in the city name.
7. Display whether the character was found or not.

Challenge

Count how many times the entered character appears in the city name.

Rules

* Use a character array.
* Use `strlen()`.
* Use a `for` loop.
* Do not use the `string` class.
*/