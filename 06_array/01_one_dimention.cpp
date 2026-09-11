//Notes One Dimentional Array
// A one-dimensional array stores multiple values
// of the same data type in a single line.

// Example:
// int arr[5] = {10,20,30,40,50};

// Index starts from 0.
// arr[0] = 10
// arr[1] = 20
// arr[2] = 30
// arr[3] = 40
// arr[4] = 50
//////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main(){
    // 1D Array
    int arr[5] = {10,20,30,40,50};

    // Display array elements
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////

// Practice:
// Create an integer array of 6 numbers.
// Take 6 numbers from the user.
// Then display all array elements using a loop.