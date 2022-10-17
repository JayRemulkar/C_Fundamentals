#include<stdio.h>

int main()
{
    int no1 = 10;
    int no2 = 20;
    int no3 = 30;
    int no4 = 40;
    int no5  = 50;

    //int arr[] = {10,20,30,40,50};

    int arr[7];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    arr[5] = 60;
    arr[6] = 70;
    //arr[7] = 80;

    printf("value at [6] is: %d\n",arr[6]);
    printf("base Address of arr is: %u\n",arr);
    printf("base Address of First element in array: %u\n",&arr[0]);
    printf("size of array is: %d\n",sizeof(arr));
    printf("size of first element in array is: %d\n",sizeof(arr[1]));
    printf("Address of [6] is: %u\n",&arr[6]);

    printf("something: %d\n", arr[5]);

    return 0;
}