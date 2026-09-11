//Notes:
// A two-dimensional array stores data in rows and columns.
//
// Example:
// int arr[2][3];
//
// 2 = rows
// 3 = columns
//
// Index starts from 0.
//
// arr[0][0] = first row, first column
// arr[0][1] = first row, second column
// arr[1][0] = second row, first column
//
// A nested loop is used because we have rows and columns.
/////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
int main(){
    // 2D Array
    int arr[2][3];

    // Take input
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    // Display array
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
    }

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////
// Practice Task:
// Create a 3x3 integer array.
// Take 9 numbers from the user.
// Display the array in matrix form.
//
// Example:
//
// 1 2 3
// 4 5 6
// 7 8 9