#include<stdio.h>


int main()
{
	
	
	
	int no = 10;
	
	int *p = &no;
	
	int **q = &p;
	
	int ***r = &q;
	
	int ****s = &r;

	int *****t = &s;
	
	int ******u = &t;
	
	int *******v = &u;
	
	int ********w = &v;
	
	int *********x = &w;
	
	int **********y = &x;
	
	int ***********z = &y;
	
	
	printf("%nd\n",***********z);
	
	return 0;
	
}