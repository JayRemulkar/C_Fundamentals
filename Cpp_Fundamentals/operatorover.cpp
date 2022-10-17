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
Demo operator --(Demo &op)
{
    op.x--;
    op.y--;
    return op;
}
Demo operator --(Demo &op,int)
{
    op.x--;
    op.y--;
    return Demo(op.x+1,op.y+1);
}
    
int main()
{
    Demo obj1(10,11);
    Demo obj2(10,11);

    Demo robj1(0,0);
    
    robj1 = --obj1;

    cout<<obj1.x<<obj1.y<<"\n";  
    cout<<robj1.x<<robj1.y<<"\n";

    Demo robj2(0,0);
    
    robj2 = obj2--;

    cout<<obj2.x<<obj2.y<<"\n";  
    cout<<robj2.x<<robj2.y<<"\n";
     
    return 0;
}