#include<iostream>

using namespace std;

typedef int number;

class Demo
{
    public:
        number fun();
        number gun();
};
typedef class Demo DEMO;
number fun()
{   
    cout<<"inside fun \n";
    return 0;
}

number gun()
{   
    cout<<"inside gun \n";
    return 0;
}



int main()
{
    DEMO obj;
    obj.fun();
    obj.gun();
    return 0;
}