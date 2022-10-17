#include<stdio.h>

/*  if we create a object of a structure 
    which have constant members then we can only  
    initialise that object using member 
    initialisation list and if we try to  
    initialise that object using member by 
    member initialisation it will give error  */


struct Demo    //we have created a structure with constant members 
{
    const int i;      // constant members
    const int f;      // constant members
};

int main()
{
    struct Demo obj1 = {5,8};    // an object with constant members

    //dobj.i++;
    //dobj.f = 44;

    printf("%d\n",obj1.i);
    printf("%d\n",obj1.f);

    struct Demo obj2 = {15,20};   // an object with constant members

    printf("%d\n",obj2.i);
    printf("%d\n",obj2.f);


    return 0;
}