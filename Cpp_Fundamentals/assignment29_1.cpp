#include<iostream>

using namespace std;

class Base
{   
    public :
        int x,y;

    private:
        virtual void fun()
        {
            cout<<"inside Base fun";
        }
};
class Derived : public Base
{
    public:
        int i,j;

        /*void fun()
        {
            cout<<"inside Devived fun";
        }*/
};

int main()
{
    Base *Bp = new Derived();

    //Bp->fun();


    return 0;
}