#include<iostream>

using namespace std;
class Demo
{
    public:
    int ino1;
    int ino2;

    Demo()
    {
        cout<<"inside contructor \n";
        ino2 = 0;
        ino2 = 0;
    }

    Demo(int a , int b)
    {
        cout<<"inside parameterised contructor \n";
        ino1 = a;
        ino2 = b; 
    }

    Demo(Demo&ref)
    {
        cout<<"inside copy constructor \n";
        ino1 = ref.ino1;
        ino2 = ref.ino2;
    }

    ~Demo()
    {
        cout<<"inside destructor\n";
    }
};


int main()
{
    //Demo obj1();

    Demo obj2(10,11);
    
    Demo obj3(obj2);
    
    return 0;
}