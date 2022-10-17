#include<stdio.h>

#pragma pack(1)  //this pragma pack removes the extra padding which saves our memory

struct Demo
{
    int i;
    float f;
    char c;
    double d;

};

int main()
{
    printf("size of structure %d\n",sizeof(struct Demo));
    

    return 0;
}