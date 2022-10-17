#include<stdio.h>

int main()
{
    int A = 10;

    char ch = 'B';



    printf("value of A is:%d\n",A);
    printf("value of ch is:%c\n",ch);

    printf("Address of A is:%u\n",&A);
    printf("address of ch is:%u\n",&ch);

    printf("Size of A is:%d\n",sizeof(A));
    printf("Size of ch is:%d\n",sizeof(ch));

    return 0;
}