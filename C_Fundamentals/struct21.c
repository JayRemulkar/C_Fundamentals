#include<stdio.h>

struct Demo    // structure demo declaration  
{
	int i;                // 1st member int i 
	struct Demo *ptr;     // 2nd member is pointer ptr of type struct demo 
};

int main()
{
	struct Demo obj1;     //  obj1 object off structure demo
	struct Demo obj2;     //   obj1 object off structure demo
	struct Demo obj3;     //   obj1 object off structure demo
	
	struct Demo *p = &obj1;   // p is pointer of type struct Demo currently it holds address of obj1 
	
	obj1.i = 5;                
	obj1.ptr =&obj2;
	
	obj2.i = 10;
	obj2.ptr = &obj3;
	
	obj3.i = 15;
	obj3.ptr = NULL;
	
	printf("%d\n",obj1.ptr->ptr->i);
 	
	
	
	return 0;
}
