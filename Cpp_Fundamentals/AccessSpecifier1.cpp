#include<iostream>

using namespace std;

class Base1
{
    public:
        int x;

        void fun()
        {
            cout<<"inside Base1 fun...\n";
        }
    
    private:

        void gun()
        {
            cout<<"inside Base1 gun...\n";
        }

    protected:

        void sun()
        {
            cout<<"inside Base1 sun...\n";
        }

};

class Base2 : public Base1
{
    public:
        int x;

        void fun()
        {
            cout<<"inside Base2 fun...\n";
        }
    
    private:

        void gun()
        {
            cout<<"inside Base2 gun...\n";
        }

    protected:

        void sun()
        {
            cout<<"inside Base2 sun...\n";
        }

};

class Base3 : public Base2
{
    public:
        int x;

        void fun()
        {
            cout<<"inside Base3 fun...\n";
        }
    
    private:

        void gun()
        {
            cout<<"inside Base3 gun...\n";
        }

    protected:

        void sun()
        {
            cout<<"inside Base3 sun...\n";
        }

};


int main()
{
    Base1 obj1;
    obj1.fun();
    //obj1.gun();       // error cause of private method gun
    //obj1.sun();       // error cause of protected method sun

    Base2 obj2;
    obj2.fun();
    obj2.Base1::fun();
    
    //obj2.gun();           // error cause of private method gun of Base2
    //obj2.Base1::gun();       // error cause of private method gun of Base1
    
    //obj2.sun();           // error cause of protected method sun of Base2
    //obj2.Base1::sun();    // error cause of potected method sun of Base1

    Base3 obj3;
    obj3.fun();
    obj3.Base2::fun();
    obj3.Base1::fun();
    
    //obj3.gun();               // error cause of private method gun of Base3
    //obj3.Base2::gun();        // error cause of private method gun of Base2
    //obj3.Base1::gun();       // error cause of private method gun of Base1
    
    //obj3.sun();               // error cause of potected method sun of Base3
    //obj3.Base2::sun();        // error cause of potected method sun of Base2
    //obj3.Base1::sun();        // error cause of potected method sun of Base1
   
    
    return 0;
}