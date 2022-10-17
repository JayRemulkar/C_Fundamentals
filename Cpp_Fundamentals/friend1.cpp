#include<iostream>

using namespace std;

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

        friend void fun();
};

void fun()
{
    Demo obj2;
    cout<<obj2.i<<"\n";
    cout<<obj2.j<<"\n";
    cout<<obj2.k<<"\n";
}

int main()
{
    Demo obj1;
    fun();
    return 0;
}