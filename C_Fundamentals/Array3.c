#include<stdio.h>


int main()
{

	int Arr[4];

	Arr[0] = 10;
	Arr[1] = 20;
	Arr[2] = 30;
	Arr[3] = 40;


	int Brr[3][4];

	Brr[0][0] = 10;
	Brr[0][1] = 20;
	Brr[0][2] = 30;
	Brr[0][3] = 40;

		





	int no1 = 10;

	int *p = &no1;



	printf("value of No1: %d",no1);

	printf("Address of no1: %u",&no1);

	printf("Size of no1: %u",sizeof(no1));

	printf("address of Arr: %u",Arr);
	
	printf("Size of Arr: %u",sizeof(Arr));
	
	printf("Size of Brr: %u",sizeof(Brr));
	
	printf("Address of Brr: %d",Brr);

	printf("Size of p: %u",sizeof(p));

	printf("Address of &p: %d",&p);

	printf("Size of *p: %d",sizeof(*p));

	printf("value of *p: %d",*p);
	
	return 0;
}




