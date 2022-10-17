#include<stdio.h>

int main()
{

    float value = 3.14;
    float *p = &value;
    float *q = p;
    float ans = *p+*q;

    printf("%f\n",value);
    printf("%d\n",p);
    printf("%d\n",q);
    printf("%f\n",*p);
    printf("%f\n",*q);
    printf("%f\n",*p+*q);



    return 0;

}