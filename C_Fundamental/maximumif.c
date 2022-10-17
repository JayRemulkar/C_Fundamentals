#include<stdio.h>

void logic(float a , float b)
{
    if(a>b)
    {
        printf("first number is maximum which is %f\n",a);
    }
    else if(b>a)
    {
        printf("second number is maximum which is %f\n",b);
    }
    else if(a==b)
    {
        printf("both the numbers are equal");
    } 
}


int main()
{
    int ino1 = 0;
    int ino2 = 0;

    printf("Enter The First Number : ");
    scanf("%f",&ino1);

    printf("Enter The Second Number : ");
    scanf("%f",&ino2);

    logic(ino1,ino2);


    return 0;
}