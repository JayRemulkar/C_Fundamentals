#include<iostream>

using namespace std;

class Demo 
{
    public:
        inline int add(int a, int b)
        {
            int ans = 0;
            ans = a+b;
            return ans;
        }
};

struct Hello
{

};

 int main()
 {
    int ret = 0;
    struct Hello obj1;
    Demo obj;

    ret = obj.add(10,5);

    cout<<ret<<"\n";

    cout<<sizeof(obj1)<<"\n";

    return 0;
 }