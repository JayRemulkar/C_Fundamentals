#include<stdio.h>

union demo
{
    int ivalue;
    float fvalue;
    double dvalue;
    char cvalue;
};

int main()
{
    union demo obj;
    
    obj.ivalue = 10;
    obj.fvalue = 44;
    obj.dvalue = 13;
    obj.cvalue ='h';

    printf("size of %d\n",sizeof(obj));
    printf("size of %f\n",obj);
    printf("ivalue %f\n",obj.ivalue);
    printf("fvalue %f\n",obj.fvalue);
    printf("dvalue %f\n",obj.dvalue);
    printf("cvalue %c\n",obj.cvalue);
    
    
    

}