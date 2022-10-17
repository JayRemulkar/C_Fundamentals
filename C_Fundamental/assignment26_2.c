#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size = 0;
    int *p = NULL;
    int iCnt = 0;

    printf("Enter the number :\n");
    scanf("%d",&size);

    p = (int *) malloc(size*sizeof(size));

    printf("%d\n",sizeof(p));

    printf("Enter the elements :\n" );

    for(iCnt = 0; iCnt < size; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Entered elements :\n");

    for(iCnt = 0; iCnt < size; iCnt++)
    {
        printf("%d\n",p[iCnt]);
    }

    free(p);
    
    return 0;
}