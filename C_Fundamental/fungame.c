#include<stdio.h>

void fun();
void gun();

int main()
{	
	printf("inside main\n");
	
	fun();
	printf("end of main\n");
	
	return 0;
	
}
void gun()
{
	printf("inside gun\n");
	
}
void fun()
{
	printf("inside fun\n");
	gun();
	printf("end of fun\n");

}
