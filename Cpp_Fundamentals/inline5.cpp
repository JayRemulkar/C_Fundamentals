#include<iostream>

using namespace std;

class Demo 
{
    public:
        inline int Add(int,int);
        inline int Sub(int,int);
};

int Demo::Add(int a, int b)
{
    int ret = 0;
    ret = a+b;
    
    return ret;
}

int Demo::Sub(int a, int b )
{
    int ret = 0;
    ret = b-a;

    return ret;
}

int main()
{
    int ret = 0;

    Demo obj;
    
    ret =  obj.Add(11,12);
    cout<<ret<<"\n";

    ret = obj.Sub(11,+12);
    cout<<ret<<"\n";
    
    return 0;
}