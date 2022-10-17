#include<iostream>

// creating a pointer to a reference 

using namespace std;

int main()
{
    int ino = 10;       // normal variable
    int &i = ino;       // reference i

    int *p = &i;        // p pointer pointing to reference i 

    cout<<"value of p : "<<p<<"\n";
    cout<<"value of *p : "<<*p<<"\n";
    cout<<"value of i : "<<i<<"\n";
    cout<<"value of ino : "<<ino<<"\n";

    return 0;
}