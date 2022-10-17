#include<iostream>

using namespace std;

class Demo
{
    public:
        int i;
        const int j;

    Demo() :j(12)
    {
        i = 10;
    }

    Demo(int a, int b) :j(b)
    {
        i = a;

    }
};

int main()
{
    Demo dobj1;

    cout<<dobj1.i<<"\n";
    cout<<dobj1.j<<"\n";

    Demo dobj2(20,30);

    cout<<dobj2.i<<"\n";
    cout<<dobj2.j<<"\n";

    return 0;
}