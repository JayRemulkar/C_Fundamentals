#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size = 0;
    int size1= 0;
    int target = 0;

    printf("enter the size : ");
    scanf("%d",&size);

    printf("enter the target : ");
    scanf("%d",&target);

    int arr[size];

    //printf("%d",sizeof(arr)); 
    
    while(size1<size)
    {
        printf("enter the elements :");
        scanf("%d",&arr[size1]);
        size1++;
    }
    if(arr[0]+arr[1]==target)
    {
        printf("index 0+1");
    }
    else if(arr[0]+arr[2]==target)
    {
        printf("index 0+2");
    }
    else if(arr[0]+arr[3]==target)
    {
        printf("index 0+3");
    }
    else if(arr[0]+arr[4]==target)
    {
        printf("index 0+4");
    }
    else if(arr[1]+arr[2]==target)
    {
        printf("index 1+2");
    }
    else if(arr[1]+arr[3]==target)
    {
        printf("index 1+3");
    }
    else if(arr[1]+arr[4]==target)
    {
        printf("index 1+4");
    }
    else if(arr[2]+arr[3]==target)
    {
        printf("index 2+3");
    }
    else if(arr[2]+arr[4]==target)
    {
        printf("index 2+4");
    }
    else if(arr[3]+arr[4]==target)
    {
        printf("index 3+4");
    }

    /*printf("%d",arr[0]);
    printf("%d",arr[1]);
    printf("%d",arr[2]);
    printf("%d",arr[3]);*/

    //scanf();
    return 0;
}