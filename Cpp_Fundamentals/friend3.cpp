#include<iostream>

using namespace std;

class Hello
{
    public:    
    void fun();
    void gun();
    
};


class Demo
{
    public :
        int i;
    private :
        int j;
    protected :
        int k;

    public:
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
        }

        friend Hello;
};


void Hello::fun()
{
    Demo obj2;
    cout<<obj2.i<<"\n";
    cout<<obj2.j<<"\n";
    cout<<obj2.k<<"\n";
}

void Hello::gun()
{
    Demo obj2;
    cout<<obj2.i<<"\n";
    cout<<obj2.j<<"\n";
    cout<<obj2.k<<"\n";
}

int main()
{
    Hello obj3;
    obj3.fun();
    obj3.gun();
    
    return 0;
}