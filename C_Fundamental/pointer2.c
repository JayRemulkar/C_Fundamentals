#include<stdio.h>

int main()
{
	int ivalue  = 10;
	float fvalue = 10.5;
	char cvalue = 'A';
	double dvalue = 10.6;
	
	void *p = NULL;
	
	
	p=&dvalue;
	printf("%f\n",*(double*)p);
	
	
	p = NULL;
	
	p=&cvalue;
	printf("%c\n",*(char*)p);
	
	
	p = NULL;
	
	p=&fvalue;
	printf("%f\n",*(float*)p);
	
	p = NULL;
	
	p=&ivalue;
	printf("%d\n",*(int*)p);
	
	return 0;
	
}