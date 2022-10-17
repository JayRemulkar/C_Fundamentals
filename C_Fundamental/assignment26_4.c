// dynamic memory allocation using malloc funtion for 10 intergers

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize = 0;
    int *iArr = NULL;

    printf("Enter the size :\n");
    scanf("%d",&iSize);

    iArr = (int*)malloc(iSize*sizeof(int));

    free(iArr);

    return 0;
}