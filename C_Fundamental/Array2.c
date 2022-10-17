#include<stdio.h>

int main()
{

    int Data[4+3] = {5+3};


    printf("element at [0] is : %d\n",Data[0]);


    printf("Address of array Data is:%u\n",Data);

    printf("size of array Data is:%d\n",sizeof(Data));

    return 0;

}