#include<iostream>

using namespace std;

typedef int inumber;        // what you want to use next define that first 

struct Demo     //structure declaration
{
    inumber a;
    inumber b;
    struct Hello
    {
        inumber i;
        inumber j;
    }obj;
};

typedef struct Demo DEMO;       // typedef DEMO
typedef struct Demo* PDEMO;     // typedef PDEMO

int main()
{
    DEMO obj1;

    obj1.a = 10;
    cout<<obj1.a<<"\n";

    obj1.b = 11;
    cout<<obj1.b<<"\n";
    
    PDEMO p = &obj1;
    p->obj.i= 14;
    cout<<p->obj.i<<"\n";

    p->obj.j = 20;
    cout<<p->obj.j<<"\n";

    cout<<sizeof(obj1)<<"\n";
    //cout<<sizeof(obj2)<<"\n";

    return 0;
}