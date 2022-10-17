#include<stdio.h>

#define PPA 15000

int main()
{
	//int *p = NULL;

	int no = 10;
	
	double *q = &no;
	

	int *r;
	
	
	printf("size of no :%d\n",sizeof(no));
	
	printf("size of pointer :%d\n",sizeof(*q));
	
	printf("size of pointer :%d\n",sizeof(q));
	
	printf("size of address :%d\n",sizeof(&no));
	
	printf("PPA is %d\n",PPA);
	
	printf(":%d\n",*r);
	
	return 0;
}