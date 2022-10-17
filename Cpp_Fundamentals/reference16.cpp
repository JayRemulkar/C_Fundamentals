#include<iostream>

// creating a reference to a pointer

using namespace std;


int main()
{
    int ino = 10;       // normal variable
    int *p = &ino;      // p pointer pointing to a variable ino

    int *(&i) = p;      // i is another reference of pointer p

    cout<<i<<"\n";
    cout<<p<<"\n";
    cout<<*i<<"\n";
    cout<<*p<<"\n"; 

    return 0;
}