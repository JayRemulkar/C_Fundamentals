#include<stdio.h>

int main()
{
	int Arr[5]={10,20,30,40,50};
	
	int *p1 = &Arr[0];
	
	int *p2 = &Arr[4];

	int *p3 = Arr;
	
	printf("Address inside p1 : %d\n",p1);
	printf("data inside *p1: %d\n",*p1);

	printf("Address inside p2 : %d\n",p2);
	printf("data inside *p2: %d\n",*p2);

	printf("Address inside p3  : %d\n",p3);
	printf("data inside *p3: %d\n",*p3);

	printf("elements bestween p1 and p2 :  %d\n",p2-p1);

	p1 = p1+1;

	//printf("Address inside p1 : %d\n",p1);
	printf("data inside *p1: %d\n",*p1);

	p2 = p2-1;
	
	//printf("Address inside p2 : %d\n",p2);
	printf("data inside *p2: %d\n",*p2);

	//p1 = p2-p1;

	printf("Address inside p1 : %d\n",p1);
	printf("data inside *p1 : %d\n",*p1);

	//p = p + 1
	return 0;
}