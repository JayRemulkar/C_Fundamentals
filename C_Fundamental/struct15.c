#include<stdio.h>

//nested structure type 2

/*  here we have created two structrures declaraction
    and we have defined a object of one structure 
    inside other structure declaration  */


struct Hello    // 1st declaration
    {
        int arr[3];
        int brr[3];
    };

struct Demo     // 2nd declaration
{
    int ino1;
    struct Hello hobj;
};

int main()
{
    struct Demo dobj;

    dobj.ino1 = 10;
    
    dobj.hobj.arr[0] = 1;
    dobj.hobj.arr[1] = 2;
    dobj.hobj.arr[2] = 3;

    dobj.hobj.brr[0] = 4;
    dobj.hobj.brr[1] = 5;
    dobj.hobj.brr[2] = 6;

    printf("size of dobj is %d\n",sizeof(dobj));
    printf("arr[0]%d\n", dobj.hobj.arr[0]);
    printf("arr[1]%d\n", dobj.hobj.arr[1]);
    printf("arr[2]%d\n", dobj.hobj.arr[2]);
    
    printf("arr[0]%d\n", dobj.hobj.brr[0]);
    printf("arr[0]%d\n", dobj.hobj.brr[1]); 
    printf("arr[0]%d\n", dobj.hobj.brr[2]);



    return 0;
}