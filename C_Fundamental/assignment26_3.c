#include<stdio.h>
#include<stdlib.h>

struct Hello
{
    float f;
    int i;
};

int main()
{
    /*int iCnt = 0;
    int Size = 0;
    struct Hello *Arr = NULL;

    printf("Enter number of elements that you want to intitialise :\n");
    scanf("%d",&Size);

    Arr = (struct Hello*)malloc(Size*sizeof(Arr));

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        printf("initialize the element :\n");
        scanf("%f",&Arr[iCnt].f);
        scanf("%d",&Arr[iCnt].i);
    }

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        printf("initialized elements :\n");
        printf("%f\n",Arr[iCnt].f);
        printf("%d\n",Arr[iCnt].i);
    }

    free(Arr);*/



    struct Hello *arr = NULL;
    
    arr = (struct Hello*)malloc(5*sizeof(int));
    
    /*arr[0].i=11;
    arr[0].f=10.10;
    
    printf("%f\n",arr[0].f);
    printf("%d\n",arr[0].i);*/

    return 0;
}