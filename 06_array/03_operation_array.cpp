#include <iostream>
using namespace std;

int main(){

    int arr[5];

    // Taking array input
    cout<<"Enter 5 numbers: ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    // Display array
    cout<<"Array: ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    // Sum of array
    int sum = 0;
    for(int i=0; i<5; i++){
        sum = sum + arr[i];
    }
    cout<<endl;
    cout<<"Sum: "<<sum<<endl;

    // Find largest value
    int largest = arr[0];
    for(int i=1; i<5; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    cout<<"Largest: "<<largest<<endl;
    // Find smallest value
    int smallest = arr[0];

    for(int i=1; i<5; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    cout<<"Smallest: "<<smallest<<endl;

    // Search a value
    int search;
    cout<<"Enter value to search: ";
    cin>>search;

    bool found = false;
    for(int i=0; i<5; i++){
        if(arr[i] == search){
            cout<<"Value found at index: "<<i<<endl;
            found = true;
            break;
        }
    }
    if(found == false){
        cout<<"Value not found"<<endl;
    }

    // Reverse array
    cout<<"Reverse: ";
    for(int i=4; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Count even and odd numbers
    int even = 0;
    int odd = 0;
    for(int i=0; i<5; i++){
        if(arr[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Even numbers: "<<even<<endl;
    cout<<"Odd numbers: "<<odd<<endl;
    return 0;
}
/////////////////////////////////////////////////////////////////////////////
/*
Practice Task!

Write a program that:
    -> Create an integer array of 10 elements.
    -> Take 10 numbers from the user.
    -> Display all array elements.
    -> Calculate and display the sum of all elements.
    -> Find and display the largest element.
    -> Find and display the smallest element.
    -> Ask the user for a number and search it in the array.
    -> Display the index where the number is found.
    -> Display the array in reverse order.
    -> Count and display how many numbers are even and how many are odd.
*/