#include<iostream>

// creating a reference of array

using namespace std;

int main()
{
    int arr[5] = {10,20,30,40,50};      // array arr

    int (&brr)[5] = arr;        // [5] is compansory to write when create a reference of array 
    
    cout<<brr<<"\n";

    int crr[3];
    crr[0] = 5;
    crr[1] = 6;
    crr[2] = 7;

    cout<<crr[2]<<"\n" ;

    return 0;
}