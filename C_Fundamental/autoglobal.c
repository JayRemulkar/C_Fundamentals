#include<stdio.h>

 int A = 10;

void gun()
{
    register 
    float fvalue = 20.11;
    

    printf("value of f : %f\n",fvalue);

}

int main()
{
    printf("inside main");

    gun();
    

    return 0;
}