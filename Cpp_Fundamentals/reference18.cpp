#include<iostream>

//we will create multiple pointers to a single variable and after that will create reference to that pointers

using namespace std;

int main()
{
    int ino = 10;
    
    int *p = &ino;
    int *q = &ino;

    int *(&i) = p;
    int *(&j) = q;

    cout<<ino<<"\n";
    cout<<&ino<<"\n";

    cout<<p<<"\n";
    cout<<q<<"\n";

    cout<<*p<<"\n";
    cout<<*q<<"\n";

    cout<<i<<"\n";
    cout<<j<<"\n";

    cout<<*i<<"\n";
    cout<<*j<<"\n";
    
    return 0;
}
