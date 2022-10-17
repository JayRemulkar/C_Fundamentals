#include<stdio.h>

int Addition(int No1,int No2)
{
	int Ans=0;
	
	Ans=No1+No2;
	
	return Ans;
}
	

int main()
{
	int a=5,b=6,c=0;
	
	c=Addition(a,b);
	
	printf("%d",c);
	
	return 0;
}