#include<iostream>

//creating multiple reference of a reference 

using namespace std;

int main()
{
    int ino = 10;    // normal variable
    int &i = ino;    // reference i
    int &j = i;      // reference j
    int &k = j;      // reference k

    cout<<i<<"\n";
    cout<<j<<"\n";
    cout<<k<<"\n";
    cout<<ino;

    return 0;
}