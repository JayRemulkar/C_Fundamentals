#include<iostream>

using namespace std;

class Arithmatic
{
	public:
		int x;
		int y;

		Arithmatic()
		{
			x=0;
			y=0;
		}
		
		Arithmatic(int a,int b)
		{
			x=a;
			y=b;
		}

		~Arithmatic()
		{
		
		}
		
		int Add()
		{
			int ret=0;
			ret=x+y;
			return ret;
		}
		
		int Sub()
		{
			int ret=0;
			ret=x-y;
			return ret;
		}
	
};

int main()
{	
	int ret=0;
	int ivalue1=0;
	int ivalue2=0;
	
	cout<<"Enter the first number :";
	cin>>ivalue1;
	
	cout<<"Enter the second number :";
	cin>>ivalue2;
	
	Arithmatic obj;
	Arithmatic obj1(ivalue1,ivalue2);
	
	ret=obj1.Add();
	cout<<"Addition is :"<<ret<<"\n";
	
	ret=obj1.Sub();
	cout<<"Substraction is :"<<ret<<"\n";
	
	return 0;
}