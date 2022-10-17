#include<stdio.h>

struct demo     // 1st structure declaration 
{
	int i;
	int j;
};

struct hello    // 1st structure declaration 
{
	int no;
	int no1;
	
};

int main()
{
	struct demo dobj;  //in this initialisation object is created after complete sturcture declaration is done

	dobj.i = 10;
	dobj.j = 50;
	
	struct hello hobj;

	hobj.no = 40;
	hobj.no1 = 60;
	
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