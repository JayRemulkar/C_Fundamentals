#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize = 5;
    float* fArr= NULL;

    printf("Enter the size : \n");
    scanf("%d",iSize);
    
    fArr = (float*)malloc(iSize*sizeof(int));
    
    /*if(p==NULL)
    {
        printf("no memory allocated");
    }
    else
    {
        printf("memory gets allocated");
    }*/
    
    free(fArr
    );

    return 0;
}