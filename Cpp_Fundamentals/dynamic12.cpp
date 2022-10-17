#include<iostream>

using namespace std;

int main()
{

    int arr[10];

    int *ptr = NULL;

    ptr = new int [5];

    if(ptr==NULL)
    {
        cout<<"no memorry allocated : \n";

    }
    else
    {
        cout<<"memorry allocated : \n";
        cout<<ptr<<"\n";
        cout<<sizeof(ptr)<<"\n";

    }

    delete []ptr;

    if(ptr==NULL)
    {
        cout<<"no memorry allocated : \n";

    }
    else
    {
        cout<<"memory allocated : \n"; 
        cout<<ptr;
    }

    return 0;
}
