#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize = 0;
    float*p = NULL;

    printf("Enter the size : \n");
    scanf("%d",iSize);
    
    p = (float*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("no memory allocated");
    }
    else
    {
        printf("memory gets allocated");
    }

    free(p);

    return 0;
}