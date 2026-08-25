/*
    Relational Operators in C++

    Relational operators are used to compare two values.

    >   Greater than
    <   Less than
    >=  Greater than or equal to
    <=  Less than or equal to
    ==  Equal to
    !=  Not equal to

    A relational expression returns:
    1 -> true
    0 -> false
*/

#include <iostream>
using namespace std;

int main() {

    /* 
       Relational operators are used to compare two values.
       The result of a relational expression is either true (1) or false (0).
    */

    int a = 10;
    int b = 20;

    // Greater than (>)
    cout<<"a > b  : "<<(a > b)<<endl;

    // Less than (<)
    cout<<"a < b  : "<<(a < b)<<endl;

    // Greater than or equal to (>=)
    cout<<"a >= b : "<<(a >= b)<<endl;

    // Less than or equal to (<=)
    cout<<"a <= b : "<<(a <= b)<<endl;

    // Equal to (==)
    cout<<"a == b : "<<(a == b)<<endl; //Remember == is comaprision & = is Assigment eg: int a = 10;

    // Not equal to (!=)
    cout<<"a != b : "<<(a != b)<<endl;

    return 0;
}

/*
///////////
//Output//
/////////
a > b  : 0
a < b  : 1
a >= b : 0
a <= b : 1
a == b : 0
a != b : 1
*/

/*
Practice Task: Check the Output of given expression.

1. 15 > 10
2. 8 < 20
3. 25 == 25
4. 15 != 10
5. 50 >= 50
6. 30 <= 40
7. (20 + 5) > (10 * 2)
8. (15 * 2) == (10 + 20)
9. 100 != (50 * 2)
10. (25 - 5) <= 20
*/