#include<iostream>

using namespace std;

class Demo 
{
    public:
        int i;
        const int j;

    Demo() : j(12)  // member initialization
    {
        i = 10;
        //j = 12;
    }
    
};

int main()
{
    Demo dobj1;
    cout<<dobj1.i<<"\n";
    cout<<dobj1.j<<"\n";
    return 0;
}