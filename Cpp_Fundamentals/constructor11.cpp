#include<iostream>

using namespace std;

class hello
{
    public:
        int i,j;

        hello()
        {
            cout<<"kuch to dede bhai : \n" ;
            i = 0;
            j = 0;
        }

        hello(int a, int b = 12)
        {
            cout<<"kuch to hain : \n" ;
            i = a;
            j = b;

        }

        hello(hello&babal)
        {
            cout<<"churaya hua mal : \n";
            i = babal.i;
            j = babal.j;

        }

        ~hello()
        {
            cout<<"ja na be : \n";
        }

};

int main()
{
    hello obj1();
    //cout<<obj1().i;

    hello obj2(20);
    cout<<obj2.i<<"\n";
    cout<<obj2.j<<"\n";
    
    hello obj3(obj2);
    cout<<obj2.i<<"\n";
    cout<<obj2.j<<"\n";
    
    return 0;    
}