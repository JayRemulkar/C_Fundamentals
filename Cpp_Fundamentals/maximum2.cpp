#include<iostream>

using namespace std;

class maximum
{
    public:
        void logic(float a , float b)
        {
            if(a>b)
            {
                cout<<"first number is maximum which is "<<a;
            }
            else if(b>a)
            {
                cout<<"second number is maximum which is "<<b;
            }
            else if(a==b)
            {
                cout<<"both the numbers are equal";
            } 
        }
};

int main()
{
    float ino1 = 0 , ino2 = 0;

    cout<<"enter the first number ";
    cin>>ino1;

    cout<<"enter the second number ";
    cin>>ino2;

    maximum obj1;
    obj1.logic(ino1,ino2);

    return 0;
}