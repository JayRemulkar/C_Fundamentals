#include<stdio.h>

int Add()
{
	auto int no1 = 0;
	auto int no2 = 0;
	auto int output = 0;
	
	printf("enter first number :");
	scanf("%d",&no1);
	
	printf("enter second number :");
	scanf("%d",&no2);
	
	output = no1+no2;
	
	return output;
	
}