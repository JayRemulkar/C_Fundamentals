#include "stdio.h"

#pragma pack(1)

struct Demo
{
    int i;
    float f;
    char c;
    double d;

};

int main()
{
    struct Demo obj;

    obj.i  = 10;
    obj.f = 10.5;
    obj.c = 'k';
    obj.d = 5.6;

    printf("size of structure %d\n",sizeof(obj));
    
    printf("size of integer member : %d\n",sizeof(obj.i));
    printf("size of float member : %d\n",sizeof(obj.f));
    printf("size of member character : %d\n",sizeof(obj.c));
    printf("size of double member : %d\n",sizeof(obj.d));
    return 0;
}