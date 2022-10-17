#include<iostream>

using namespace std;

typedef int number;

class Demo
{
    public:
        inline number fun()
        {
            cout<<"inside fun \n";
            return 0;
        }
};

typedef class Demo DEMO;
int main()
{
    DEMO obj;
    obj.fun();
    return 0;
}