#include<stdio.h>

struct hello
{
	int ino;
	float fno;
	struct demo
	{
		int i ;
		float j;
	
	}dobj;
};

int main()
{
	struct hello hobj;
	
	
	hobj.ino = 10;
	hobj.fno = 10.10;
	hobj.dobj.i = 5;
	hobj.dobj.j = 5.5;
	
	printf("%d\n",hobj);
	printf("%d\n",sizeof(hobj));
	
	printf("%d\n",hobj.ino);
	printf("%d\n",hobj.dobj.i);
	
	
	struct hello hobj1;
	
	
	hobj.ino = 15;
	hobj.fno = 20.15;
	hobj.dobj.i = 22;
	hobj.dobj.j = 10;
	
	printf("%d\n",hobj);
	printf("%d\n",sizeof(hobj));
	
	printf("%d\n",hobj.ino);
	printf("%d\n",hobj.dobj.i);
	
	
	
	return 0;
}