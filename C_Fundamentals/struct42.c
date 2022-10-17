#include<stdio.h>

const struct Demo
{
    int i;
    float f;
}obj3={22,66};   // created an object of a structure imediate after declaration 

int main()
{
    struct Demo obj ={10,20};  // here we have created an object of constant structure demo 

    //obj.i = 15;  error 
    //obj.f = 20;  error
    
    printf("%d\n",obj.i);
    printf("%f\n",obj.f);

    struct Demo obj1; // here we have created an object of constant structure demo

    obj1.i = 15;  
    obj1.f = 25.55; 
    
    printf("%d\n",obj1.i);
    printf("%f\n",obj1.f);

    printf("%d\n",obj3.i);
    printf("%f\n",obj3.f);
    


    return 0;
}