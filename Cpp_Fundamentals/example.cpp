#include<iostream>

using namespace std;

class Demo
{
    public:
    void fun(int a)
    {
        cout<<"First Defination ";
    }
    void fun(int a, int b)
    {
        cout<<"Second Defination ";
        
    }
};
int main()
{
    Demo obj;           //if the class contains no characteristics then never use the () while creating the object
    obj.fun(5);
    obj.fun(10,15);

    return 0;

}