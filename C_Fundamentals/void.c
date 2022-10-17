#include<stdio.h>

int main()
{
	int ivalue = 10;
	float fvalue = 10.10;
	double dvalue = 20.22222;
	char cvalue ='A';
	
	
	void *ptr = NULL;
	
	
	ptr = &ivalue;
	printf(" :%d\n",*(int*)ptr);  //this will fetch integer size of data
	
	ptr = NULL;
	ptr = &fvalue;
	printf(" :%f\n",*(float*)ptr);  //this will fetch float size of data
	
	ptr = NULL;
	ptr = &dvalue;
	printf(" :%f\n",*(double*)ptr);  //this will fetch duble size of data
	
	ptr = NULL;
	ptr = &cvalue;
	printf(" :%c\n",*(char*)ptr);  //this will fetch character size of data
	
	
	return 0;
}