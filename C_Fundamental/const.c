#include<stdio.h>

int main()
{
	int no1 = 10;
	
	const int no2 = 20;
	
	
	int arr[] = {10,20,30,40,50};
	
	const int brr[] = {10,20,30,40,50,60};
	
	
	
	no1++;
	
	//no2++;
	
	arr[0] = 11;
	
	
	//brr[0] = 11; 

	return 0;
}