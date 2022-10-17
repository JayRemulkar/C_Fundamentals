#include<stdio.h>

// find the average of three numbers 

int main()
{
	auto float fno1 = 0;
	auto float fno3 = 0;
	auto float fno2 = 0;
	auto float favg = 0; 
	
	printf("enter first number :");
	scanf("%f",&fno1);
	
	printf("enter second number :");
	scanf("%f",&fno2);
	
	printf("enter third number :");
	scanf("%f",&fno3);
	
	favg = (fno1+fno2+fno3)/3;
	
	printf("average of three number is :%f\n",favg);
	
	return 0;
}
