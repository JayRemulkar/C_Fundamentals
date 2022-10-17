#include<iostream>

using namespace std;

class Base
{
    public:
    int i;
    float f;
    double d;

    void fun()
    {}

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
    {}
};

int main()
{
    Base bobj;

    Derived dobj;

    return 0;
}