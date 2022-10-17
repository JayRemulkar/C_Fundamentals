#include<iostream>

// creating a reference to a pointer

using namespace std;


int main()
{
    int ino = 10;       // normal variable
    int *p = &ino;      // p pointer pointing to a variable ino
    int **q = &p;

    int **(&i) = q;      // i is another reference of pointer p

    cout<<p<<"\n";       // p will show address no ino
    
    cout<<i<<"\n";       // i will show address of p
    cout<<q<<"\n";       // q will show address of p

    cout<<&ino<<"\n";      // ino will show address of ino
    cout<<*i<<"\n";        // *i will show data of p
    
    cout<<*p<<"\n";         // *p will show data of ino
    cout<<**q<<"\n";        // **q will show the data of ino
    cout<<**i<<"\n";        // **i will show the data of ino

    return 0;
}