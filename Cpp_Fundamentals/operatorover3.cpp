#include<iostream>

using namespace std;

class Demo 
{
    public:
        int x;
        int y;

        Demo(int i = 10, int j = 20)
        {
            x = i;
            y = j;
        }
        ~Demo()
        {

        }
};

bool operator ==(Demo o1,Demo o2)
{
    if((o1.x==o2.x)&&(o1.y==o2.y))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator >(Demo o1,Demo o2)
{
    if((o1.x>o2.x)&&(o1.y>o2.y))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    Demo obj1(10,11);
    Demo obj2(21,31);

    /*if(obj1==obj2)
    {
        cout<<"objects are same \n";
    }
    else
    {
        cout<<"objects are different \n";
    }*/

    if(obj1>obj2)
    {
        cout<<"obj1 is greater \n";
    }
    else
    {
        cout<<"obj1 is not greater \n";
    }
    
    return 0;
}