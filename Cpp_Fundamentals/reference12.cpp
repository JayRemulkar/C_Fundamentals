#include<iostream>

// creating multiple references of normal variable  

using namespace std;

int main()
{
    int ino = 10;      //noramal variable 
    int &i = ino;      //reference i
    int &j = ino;      //reference j
    int &k = ino;      //reference k

    cout<<i<<"\n";
    cout<<j<<"\n";
    cout<<k<<"\n";
    cout<<ino;
    
    return 0;
}