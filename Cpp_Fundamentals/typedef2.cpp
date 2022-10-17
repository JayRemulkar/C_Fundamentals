#include<iostream>

using namespace std;

typedef int number;
typedef char letter;
typedef void nop;
typedef double twotimes;
typedef float decimal;

number fun()
{
    cout<<"inside fun"<<"\n";
    return 0;
}

nop gun()
{
    cout<<"inside gun"<<"\n";
}

decimal bun()
{
    cout<<"inside bun"<<"\n";
    return 0;
}

twotimes run()
{
    cout<<"inside run"<<"\n";
    
}

number main()
{
    //typedef int number;    the scope of that typedef is depends upon where we create the typedef 
    fun();
    run();
    bun();
    run();
    return 0;
}