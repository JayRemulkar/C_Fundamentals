#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size = 0;
	
	
	printf("enter the size : ");
	scanf("%d",&size);

	int *p = NULL;
	
	
	p = (int*)malloc(size*sizeof(int));
	
	if(p==NULL)
	{
		printf("memory not alocated");
	}
	else
	{
		printf("memory alocated");
	}
	
	printf("%d\n",sizeof(p));

	free(p);
	
	return 0;
}