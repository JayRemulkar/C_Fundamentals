#include<stdio.h>

struct demo 
{
	int ivalue;
	float fvalue;
	int jvalue;
}obj2 = {20,20.11,15};    // 2 imidiate creation of object after declareation
						  // memeber initilisation list
int main()
{
	struct demo obj1;     // 1 creation of object after complete declaration
	
	obj1.ivalue = 10;     // member to member in initilisation
	obj1.fvalue = 10.11;
	obj1.jvalue = 5;
	
	
	printf("obj1.ivalue:%d\n",obj1.ivalue);
	
	printf("obj1.fvalue:%f\n",obj1.fvalue);
	
	printf("obj1.jvalue:%d\n",obj1.jvalue);
	
	
	
	printf("obj2.ivalue:%d\n",obj2.ivalue);
	
	printf("obj2.fvalue:%f\n",obj2.fvalue);
	
	printf("obj2.jvalue:%d\n",obj2.jvalue);
	
	
	
	
	
	return 0;
}