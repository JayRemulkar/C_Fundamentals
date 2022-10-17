#include<stdio.h>

struct demo
{
    int i;
    float j;
    int k;
    //double e;
};

union hello  //no padding in case of union
{   
    int p;
    int k;
    float c;
    //double d; 
};

int main()
{
    struct demo dobj;

    dobj.i = 10;
    dobj.j = 15;
    //dobj.k = 20;
    //dobj.e = 44;

    union hello hobj;
    
    hobj.p = 25;
    hobj.k = 30;
    //hobj.c = 35;
    //hobj.d = 66;


    printf("size of :%d\n",sizeof(dobj));
    printf("size of :%d\n",sizeof(hobj));

    printf("value of i is: %d\n",dobj.i);
    printf("value of j is: %f\n",dobj.j);
    //printf("value of k is: %d\n",dobj.k);
    //printf("value of e is: %f\n",dobj.e);

    printf("value of p is: %d\n",hobj.p);
    printf("value of k is: %d\n",hobj.k);
   //printf("value of c is: %d\n",hobj.c);
    //printf("value of d is: %f\n",hobj.d);

    return 0;
}