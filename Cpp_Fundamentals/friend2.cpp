#include<iostream>

using namespace std;

class Hello
{
    public:    
    void fun();
    
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

        friend void Hello::fun();
};


void Hello::fun()
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
    
    return 0;
}