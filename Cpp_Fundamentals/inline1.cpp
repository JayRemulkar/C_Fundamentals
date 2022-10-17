#include<iostream>

using namespace std;

class Demo 
{
    public:
        int add(int a, int b)
        {
            int ans = 0;
            ans = a+b;
            return ans;
        }
};
 int main()
 {
    int ret = 0;

    Demo obj;

    ret = obj.add(10,5);

    cout<<ret<<"\n";

    cout<<sizeof(Demo)<<"\n";

    return 0;
 }