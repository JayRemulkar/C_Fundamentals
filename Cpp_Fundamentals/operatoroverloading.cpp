#include<iostream>

using namespace std;

class Demo
{
    public:
        int a;
        int b;

        Demo(int i = 10,int j = 10)
        {
            a = i;
            b = j;
        }
        friend Demo operator + (Demo o1,Demo o2);
        friend Demo operator - (Demo o1,Demo o2);
        
};

Demo operator + (Demo o1, Demo o2)
{
    cout<<"inside + operator \n";
    return Demo(o1.a+o2.a,o1.b+o2.b);
}

Demo operator - (Demo o1, Demo o2)
{
    cout<<"inside - operator \n";
    return Demo(o1.a-o2.a,o1.b-o2.b);
}

int main()
{
    Demo obj1(10,11);
    Demo obj2(21,31);
    Demo obj3(0,0);
    
    //obj3.a= obj1.a+obj2.a;
    //cout<<obj3.a<<"\n";

    obj3 = obj1 + obj2;

    cout<<obj3.a<<"\n";
    cout<<obj3.b<<"\n";

    obj3 = obj1 - obj2;

    cout<<obj3.a<<"\n";
    cout<<obj3.b<<"\n";


    
    return 0;
}