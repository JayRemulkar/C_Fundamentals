// dynamic memory allocation using realloc funtion for 10 intergers

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize = 5;
    int *iArr = NULL;

    iArr = (int*)malloc(iSize*sizeof(int));

    iArr = (int*)realloc(iArr,10*sizeof(int));

    free(iArr);
    
    return 0;
}