#include<iostream>

using namespace std;

int main()
{
    typedef int number;
    typedef char letter;

    letter let = 'J';

    number no = 10;
    
    cout<<sizeof(no)<<"\n";
    cout<<sizeof(let)<<"\n";
    
    cout<<no<<"\n";
    cout<<let<<"\n";

    typedef const int* Cptri;

    Cptri p = &no;

    cout<<*p<<"\n";

    typedef const char* Cptrc;

    Cptrc q = &let;

    cout<<*q<<"\n";

    return 0;
}