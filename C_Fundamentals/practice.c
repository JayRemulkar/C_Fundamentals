#include<stdio.h>

int main()
{

    double arr[] = {1.5,6.4,7.5};

    double *p = arr;
    double *q = &(arr[0]);
    double *r = &(arr[3]);
    arr[3]= 2.2;

    printf("%d\n",arr);
    printf("%d\n",sizeof(arr));
   
    printf("%f\n",arr[3]);
    printf("%d\n",&(arr[3]));
    printf("%d\n",sizeof(arr[3]));
    
    printf("%d\n",&r);
    printf("%d\n",r);
    
    return 0;
    return 0;
    return 0;

}