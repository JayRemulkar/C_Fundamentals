#include<iostream>

using namespace std;

class Base
{   
    public :
        int x,y;

    virtual void fun()=0; 
};


int main()
{
    Base *Bp = NULL;

    return 0;
}