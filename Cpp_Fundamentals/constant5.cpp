#include<iostream>

using namespace std;

class Demo 
{
    public:
        int i;
        const int j;
    
    Demo(int a, int b) :j(b)
    {
        i = a;
    }

    void fun()
    {
        cout<<"inside fun :\n";
        i++;
        //j++;
    }

    void gun() const
    {
        cout<<"inside gun :\n";
        i++;
        //j++;
    }

};

int main()
{
    Demo dobj1(10,11);

    dobj1.fun();
    dobj1.gun();
    return 0;
}