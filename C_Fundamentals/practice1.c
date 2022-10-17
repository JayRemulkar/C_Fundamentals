#include<stdio.h>

int main()
{
    int arr[]={10,20,30,40,50};

    int *p = arr;

    printf("%d\n",arr);
    printf("%d\n",&arr);
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(arr[0]));
    printf("%d\n",sizeof(p));
    printf("%d\n",sizeof(*p));

    return 0;

}