#include<stdio.h>

int main()
{
    demo();
    demo();

    hello();
    hello();

    return 0;
}

int demo()
{
    
    int A = 10;
    A++;

    printf("%d\n",A);

    return 0;
}
int hello()
{
    
    static int B = 10;

    B++;

    printf("%d\n",B);

    return 0;
}