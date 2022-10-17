#include<stdio.h> 

int main()
{
    int arr[3] = {10,20,30};
    int a = 0;

    a = arr[0]+a+arr[2];
    a++;

    printf("value of a :%d\n",a);
}
/*int main()
{

    int Arr[3] = {10,20,30,40,50,60};

    printf("sizeof : %d\n",sizeof(Arr));

    printf("element at index 4 is :%u\n",Arr[2]);
  
    return 0;
}*/

/*int demo(int a)
{
    int Arr[] = {10,20,30,40,50,60};
    printf("sizeof Arr : %d\n",sizeof(Arr));

    printf("sizeof demo : %d\n",sizeof(demo));

    printf("address of demo : %d\n",demo);

    return 0;
}*/
