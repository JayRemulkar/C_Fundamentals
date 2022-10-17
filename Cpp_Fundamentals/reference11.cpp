#include<iostream>

//creating a reference of a normal variable

using namespace std;

int main()
{
    int ino = 10;  //normal variable
    int &a = ino;  //reference a

    cout<<a<<"\n";
    cout<<ino;

    return 0;
}