#include<stdio.h>


int no = 15;

int demo()
{
	auto int no1 = 20;
	
	printf("variable inside demo function is %d\n",no1);
	
	return 0;
}



int main()
{
	int value = 10;
	
	printf("value inside main function is %d\n",value);
	
	demo();
	
	return 0;
}