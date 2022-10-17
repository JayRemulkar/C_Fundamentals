#include<stdio.h>

extern int no;

extern int demo();

extern int A;

int main ()
{

	printf("no from other file :%d\n",no);
	

	
	demo();
	
	return 0;
}