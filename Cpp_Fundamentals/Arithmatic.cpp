#include<iostream>

using namespace std;

class Arithmatic
{
    public:
        int ino1;
        int ino2;

        Arithmatic()
        {
            cout<<"inside default constructor :";
            ino1 = 0;
            ino2 = 0;
        }

        Arithmatic(int A, int B)
        {
            cout<<"inside parameterised constructor :";
            ino1 = A;
            ino2 = B;
        }

        int Addition()
        {
            int ians = 0;
            ians = ino1 + ino2;
            
            return ians;
        }

        int Substraction()
        {
            int ians = 0;
            ians = ino1 - ino2;
            
            return ians;
        }

};

int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;
    int ret = 0;

    cout<<"Enter The First Number :\n";
    cin>>ivalue1;

    cout<<"Enter The First Number :\n";
    cin>>ivalue2;

    Arithmatic obj1;
    Arithmatic obj2(ivalue1,ivalue2);

    ret = obj1.Addition();
    cout<<"Addition is :\n"<<ret;

    ret = obj1.Substraction();
    cout<<"Substraction is :\n"<<ret;

    ret = obj2.Addition();
    cout<<"Adddition is\n"<<ret;

    ret = obj2.Substraction();
    cout<<"Substraction is :\n"<<ret;

    return 0;
}