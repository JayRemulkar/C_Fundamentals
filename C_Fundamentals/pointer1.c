#include<stdio.h>

int main()
{
	int ivalue = 10;
	int *iptr = &ivalue;
	
	float fvalue = 10.10;
	float *fptr = &fvalue;
	
	char cvalue = 'A';
	char *cptr = &cvalue;
	
	double dvalue = 20.1111;
	double *dptr = &dvalue;
		
	printf ("address of ivalue : %d\n",&ivalue);
	printf ("address of fvalue : %d\n",&fvalue);
	printf ("address of ivalue : %d\n",&ivalue);
	printf ("address of ivalue : %d\n",&ivalue);
	
	
	printf ("address of iptr : %d\n",&iptr);
	printf ("address of fptr : %d\n",&fptr);
	printf ("address of cptr : %d\n",&cptr);
	printf ("address of dptr : %d\n",&dptr);
	
	
	printf (": %d\n",iptr);
	printf (": %d\n",fptr);
	printf (": %d\n",cptr);
	printf (": %d\n",dptr);
	
	
	printf (": %d\n",*iptr);
	printf (": %d\n",*fptr);
	printf (": %d\n",*cptr);
	printf (": %d\n",*dptr);
	
	
	
	return 0;
}