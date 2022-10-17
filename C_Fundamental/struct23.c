#include<stdio.h>

struct demo
{
    int ivalue;
    float fvalue;
    double dvalue;
    char cvalue;
};

int main()
{
    struct demo obj;
    
    struct demo *p = &obj;

    //obj.ivalue;
    //obj.fvalue;
    //obj.dvalue;
    //obj.cvalue;

    p->ivalue = 10;
    p->fvalue = 20;
    p->dvalue = 30;
    p->cvalue = 'j';


    printf("ivalue %d\n",obj.ivalue);
    printf("fvalue %f\n",obj.fvalue);
    printf("dvalue %f\n",obj.dvalue);
    printf("cvalue %c\n",obj.cvalue);
    
    
    
    return 0;
}