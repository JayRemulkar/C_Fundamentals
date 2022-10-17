#include<iostream>

using namespace std;

class Base
{
    public:
    int i;
    float f;
    double d;

    void fun()
    {
        cout<<"Base fun";
    }

    void gun()
    {}
};

class Derived : public Base
{
    public:
    int i;
    float f;

    void sun()
    {}

    void fun()
    {
        cout<<"Derived fun";
    }
};

int main()
{
    Base bobj;

    Derived dobj;

    dobj.i;

    return 0;
}