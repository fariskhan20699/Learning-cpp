#include <iostream>
using namespace std;
int main(){
    bool isOut;
    int score;

    cout<<"Enter the Score: "; //for output use cout => console output
    cin>>score; //for input use cin => console input

    cout<<"Enter Result: ";
    cin>>isOut;
    cout<<endl;

    cout<<"Score: "<<score<<endl; //endl line ending 
    cout<<"Result: "<<isOut<<endl;
    return 0;
}

/*
//////////
//Output//
/////////

Enter the Score: 23
Enter Result: 0

Score: 23
Result: 0

*/

/*
Practice Task:
-> Write a program that takes your name and age as input from the 
   user and then prints them on the screen.

*/