#include <iostream>
using namespace std;
int main(){

    char grade = 'A'; //char can only one alphabet it size is 1 byte
    int age = 19; //int can store only whole number and its size is  4 bytes
    string name = "Faris khan"; //string can store sequence of char
    float price = 3.99; //float can store decimal value its size is 4 bytes
    double fee = 3.5674; //double provides more precision than float and and its size is 8 bytes
    bool isLoggedIn = true; //boolean can store only 0/1 or true/false
                 //long long is commonly used in large data but it size is 8 bytes

    //print 
    cout<<"Name   : "<<name<<endl;
    cout<<"Age    : "<<age<<endl;
    cout<<"Price  : "<<price<<endl;
    cout<<"Fee    : "<<fee<<endl;
    cout<<"Login  : "<<isLoggedIn<<endl;
    cout<<"Grade  : "<<grade<<endl<<endl;

    //checking the size 

    cout<<"Int     : "<<sizeof(int)<<endl;
    cout<<"String  : "<<sizeof(string)<<endl;
    cout<<"Float   : "<<sizeof(float)<<endl;
    cout<<"Double  : "<<sizeof(double)<<endl;
    cout<<"Boolean : "<<sizeof(bool)<<endl;
    cout<<"Char    : "<<sizeof(char)<<endl;
    return 0;
}

/*
///////////
//Output//
/////////
Name  : Faris khan
Age   : 19
Price : 3.99
Fee   : 3.5674
Login : 1
Grade : A

////////////
//size of///
////////////
Int     : 4
String  : 32
Float   : 4
Double  : 8
Boolean : 1
Char    : 1
*/

/*
Practice Task: Write a program that creates variables of 
different data types such as int, float, double, char, 
and bool, then prints their values.
*/