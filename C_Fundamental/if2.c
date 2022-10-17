#include<stdio.h>

int main()
{
    int imarks = 0;

    printf("enter your marks :");
    scanf("%d",&imarks);

    if(imarks>=60)
    {
        printf("1st class ");
    } 
    else
    {
        printf("not 1st class ");
    }
    return 0;
}