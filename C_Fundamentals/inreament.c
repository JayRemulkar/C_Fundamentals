#include<stdio.h>

int main()
{

	int no1 = 10;
	int no2 = 10;
	
	int ans1 = 0;
	int ans2 = 0;
	
	ans1 = no1++;
	
	printf("value of ans1 : %d\n",ans1);
	printf("value of no1 : %d\n",no1);
	
	ans2 = ++no2;
	
	printf("value of ans2: %d\n",ans2);
	printf("value of no2: %d\n",no2);
	
	return 0;
	
}