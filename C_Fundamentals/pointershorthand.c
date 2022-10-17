#include<stdio.h>

int main()
{
	int arr[]={10,20,30,40,50};
	
	int *p = &arr[0];
	int *q = &arr[4];
	
	printf("value of p before increament : %d\n",*p);
	printf("Address of p before increament : %d\n",p);
	
	printf("value of q before increament : %d\n",*q);
	printf("Address of q before increament : %d\n",q);
	
	
	
	p++;  //when we increment a pointer with shorthand operators pointer shift with one element 
	
	/*	100+1*(size_of_pointer_type)
		100+1*(4)
		100+4
		104*/
	
	printf("value of p after increament : %d\n",*p);
	printf("Address of p after increament : %d\n",p);
	
	q--;  //when we increment a pointer with shorthand operators pointer shift with one element 
	
	/* 	116+1*(size_of_pointer_type)
		116-1*(4)
		116-4
		112*/
	
	printf("value of q after increament : %d\n",*q);
	printf("Address of q after increament : %d\n",q);
	
	
	

	return 0;
}