#include<iostream>

using namespace std;

int main()
{
    int *p = NULL;

    p = new int(1);     // use () brackets for memory allocation for variable

    if(p==NULL)
    {
        cout<<"kahi nahi ahe : \n";

    }
    else
    {
        cout<<"jaga ahe : \n";
        cout<<sizeof(p)<<"\n";
    }
    
    delete p;       // no need to use [] operators
    
    if(p==NULL)
    {
        cout<<"kahi nahi ahe : \n";
    
    }
    else
    {
        cout<<"jaga ahe : \n";

    }
    cout<<p;
    
    return 0;
} 
