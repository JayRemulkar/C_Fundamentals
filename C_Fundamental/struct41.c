#include<stdio.h>

/*  if we create a constant object of
    a structure then we can only  
    initialise that object using member 
    initialisation list and if we try to  
    initialise that object using member by 
    member initialisation it will give error  */

struct Demo      //declaration
{
    int i;
    float f;
};

int main()
{
    const struct Demo obj1 = {10,20};   // here we have created constant object 

    //obj.i = 15;             
    //obj.f = 20;  error
    
    printf("%d\n",obj1.i);
    printf("%f\n",obj1.f);

    const struct Demo obj2 = {14,17};  // here we have created constant object 

    //dobj.i = 15;  error 
    //dobj.f = 20;  error
    
    printf("%d\n",obj2.i);
    printf("%f\n",obj2.f);

   //const struct Demo obj3;  // here we have created constant object of structure demo 

    //obj3.i = 18; 
    //obj3.f = 22; 
    
    //printf("%d\n",obj3.i);
    //printf("%f\n",obj3.f);  

    return 0;
}