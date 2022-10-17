#include<stdio.h>

//nested structure type 1

/*  here we have created a structrure 
    inside that structure we have created 
    another structure  */

struct Demo   // 1st declaration
{
    int ino1;  
    struct Hello   // 2nd declaration
    {
        int arr[3];
        int brr[3];
    }hobj;
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