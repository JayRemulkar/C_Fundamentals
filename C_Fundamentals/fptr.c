#include<stdio.h>

void addition(int no1,int no2)
{
    int ans = 0;
    ans = no1 + no2;
    printf("%d",ans);
}
int main()
{ 
    int a = 10, b = 20;
    int ret = 0;


    void(*fptr)(int,int);
    
    fptr = addition;
    
    //printf("address of Addition :%u\n",addition);
    
    fptr(a,b);
    
    //printf("addition of a+b: %d\n",ret);

    return 0;
}