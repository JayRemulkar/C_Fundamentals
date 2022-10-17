#include<stdio.h>

int main()
{
    demo();
    return 0;
}

int demo(int a)
{
    int Arr[] = {10,20,30,40,50,60};
    printf("sizeof Arr : %d\n",sizeof(Arr));

    printf("sizeof demo : %d\n",sizeof(demo));

    printf("address of demo : %d\n",demo);

    return 0;
}
