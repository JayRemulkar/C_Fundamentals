#include<stdio.h>

/* creating a sructure which have 1 member and
 1 pointer which points to another structure.*/  

struct demo   
{
    int ino;
    struct demo *p;
};

int main()
{
    struct demo obj1,obj2,obj3,obj4;
     
    struct demo *q = &obj1;
    
    obj1.ino = 10;
    obj1.p = &obj2;

    obj2.ino = 20;
    obj2.p = &obj3;

    obj3.ino = 30;
    obj3.p = &obj4;

    obj4.ino = 40;
    obj4.p = NULL;


    printf("%d\n",*q);       
    printf("%d\n",obj1);
    printf("%d\n",obj1.ino);       //  direct accesing operator(.).
    printf("%d\n",obj1.p->ino);      // indirect accessing operator(->)used for pointer.
    printf("%d\n",obj1.p->p->ino);
    printf("%d\n",obj1.p->p->p->ino);

    printf("%d\n",obj1.p);  
    
    


    return 0;
}