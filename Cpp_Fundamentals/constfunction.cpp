#include<iostream>

using namespace std;

class Demo
{
    public:
        int x;

        Demo()
        {
            x=0;
        }

        int fun() const
        {
            cout<<"inside fun \n";
        }
};

int main()
{
    const Demo obj;
    obj.fun();
        
    
    return 0;
}