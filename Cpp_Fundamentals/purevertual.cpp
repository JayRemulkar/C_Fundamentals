#include<iostream>

using namespace std;

class Base
{
    public :
        int x;
        int y;
    
    int Add(int a,int b)
    {
        return a+b; 
    }

    virtual int Sub(int a, int b) =0;
};

class Derived : public Base
{
    public :
        int i;
        int j;
    
    /*int Sub(int a, int b)
    {
        return a-b;
    }*/

    int Mul(int a,int b)
    {
        return a*b;
    }

};
int main()
{
    Base *bp = new Derived();
    int ret = 0;

    ret = bp->Add(10,11);
    cout<<ret<<"\n";

    ret = bp->Sub(10,11);
    cout<<ret<<"\n";

    //ret = bp->Mul(5,5);
    
    return 0;
}