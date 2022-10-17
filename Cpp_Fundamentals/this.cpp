#include<iostream>

using namespace std;

class Demo
{
    public:
        int x;
        int y;

        Demo()
        {
            x = 0;
            y = 0;
        }

        Demo(int A)
        {
            x = A;
            y = 0;
        }

        Demo(int A,int B)
        {
            x = A;
            y = B;
        }

        ~Demo()
        {
          
        }

        int Add(int i = 0,int j = 0)
        {
            int ret = 0;
            ret = x+y+i+j;
            
            return ret;
        }

        
        int Sub(int i = 0,int j = 0)
        {
            int ret = 0;
            ret = x-y-i-j;
            
            return ret;
        }

};

int main()
{
    int ret = 0;

    Demo obj1;              // default constructor
    ret = obj1.Add();
    cout<<ret<<"\n";

    ret = obj1.Sub();
    cout<<ret<<"\n";

    Demo obj2(11,10);       // parameterised constructor
    ret = obj2.Add();
    cout<<ret<<"\n";

    ret = obj2.Sub();
    cout<<ret<<"\n";

    Demo obj3;
    ret = obj3.Add(15,16);
    cout<<ret<<"\n";

    ret = obj3.Sub(16,15);
    cout<<ret<<"\n";

    Demo obj4(10,10);
    ret = obj4.Add();
    cout>>this->i<<"\n";
    cout<<ret<<"\n";

    ret = obj4.Sub(10,10);
    cout<<ret<<"\n";

   









    return 0;
}