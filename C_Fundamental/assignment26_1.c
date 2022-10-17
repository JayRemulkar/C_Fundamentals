#include<stdio.h>
#include<stdlib.h>

int main()
{
    int*p = NULL;

    printf("%d\n",sizeof(p));
    printf("%d\n",p);
    

    p = malloc(sizeof(int));

    printf("%d\n",sizeof(p));
    printf("%d\n",p);


    int*q = malloc(10*(sizeof(int)));

    printf("%d\n",sizeof((int*)q));




    return 0;
}