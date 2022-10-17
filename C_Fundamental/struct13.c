#include<stdio.h>

struct demo
{
	int i;
	int j;
}dobj={10,20};  // in this initialistion the object is created exact after structure declaration

struct hello 
{
	int no;
	int no1;
	
}hobj={30,40};

int main()
{
	
	printf("%d\n",hobj);
	printf("%d\n",sizeof(hobj));
	printf("%d\n",hobj.no);
	printf("%d\n",hobj.no1);

	
	printf("%d\n",dobj);
	printf("%d\n",sizeof(dobj));
	printf("%d\n",dobj.i);
	printf("%d\n",dobj.j);
	
	return 0;


}