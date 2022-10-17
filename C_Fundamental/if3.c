#include<stdio.h>
 /* 1st std valyachi 8 la
    2nd std valyachi 9 la
    3rd std valyachi 10 la
    4th std valyachi 11 la
    5th std valyachi 12 la*/


int main()
{
    int istd = 0;

    printf("enter your standard :");
    scanf("%d",&istd);

    if(istd==1)
    {
        printf("sakali 8 la ye");
    }
    else if(istd==2)
    {
        printf("sakali 9 la ye");
    }
    else if(istd==3)
    {
        printf("sakali 10 la ye");
    }
    else if(istd==4)
    {
        printf("sakali 11 la ye");
    }
    else if(istd==5)
    {
        printf("sakali 12 la ye");
    }
    else
    {
        printf("shala fakt 5vi paryanta ahe melya");
    }
    
    return 0;
}