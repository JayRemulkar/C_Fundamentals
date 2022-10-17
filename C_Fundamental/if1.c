#include<stdio.h>

// 0 to 10 sathi 100Rs

// 10 to 40 sathi 500Rs

// 40 to above 300Rs
 
int main()
{
    int iAge = 0;

    printf("enter your age:");
    scanf("%d",&iAge);

    if((iAge>=0)&&(iAge<=10))
    {
        printf("100RS dya");
    }
    else if((iAge>10)&&(iAge<=40))
    {
        printf("500RS dya");
    }
    else if(iAge>40)
    {
        printf("300Rs dya");
    }
    
    return 0;
}