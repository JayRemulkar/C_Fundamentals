#include<iostream>

using namespace std;

class Base
{
    public :
        int x;
        int y;
    
    void fun()
    {
        cout<<"inside base fun :\n"; 
    }

    virtual void gun()
    {
        cout<<"inside base gun :\n";
    }

    virtual void sun()
    {
        cout<<"inside base sun :\n";    
    }

    virtual void run() = 0;
};

class Derived : public Base
{
    public :
        int i;
        int j;
    
    void fun()
    {
        cout<<"inside derived fun :\n";
    }

    virtual void gun()
    {
        cout<<"inside derivied gun :\n";
    }

    void run()
    {
        cout<<"inside derived run :\n";
    }

};
int main()
{
    //Base Bobj;
    Derived Dobj;

    Base *bp = NULL;
    bp = &Dobj;

    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";
    
    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();    
 
    return 0;
}