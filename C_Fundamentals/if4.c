#include<stdio.h>

int main()
{
    auto int istd = 0;

    printf("enter your standard :");
    scanf("%d",&istd);

    switch(istd)
    {
        case 1 :
            printf("sakali 8 la ye");
            break;
       
        case 2 :
            printf("sakali 9 la ye");
            break;
        
        case 3 :
            printf("sakali 10 la ye");
            break;
       
        case 4:
            printf("sakali 11 la ye");
            break;
       
        case 5:
            printf("sakali 12 la ye");
            break;
       
        default :
            printf("shala fakt 5vi paryanta ahe");

    }
    return 0;

}