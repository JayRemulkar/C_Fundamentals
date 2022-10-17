// addition of user given nunber numbers 

#include<iostream>

using namespace std;

class Arithmatic
{
    public :
    int Sumation(int iNo)
    {
        if(iNo<0)
        {
            iNo = -iNo;
        }
        
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iSum = iCnt + iSum;
        }
        return iSum;
    }
};

int main()
{
    int iSize = 0;
    int iRet = 0;

    cout<<"Enter Number :\n";
    cin>>iSize;

    Arithmatic obj1;
    
    iRet = obj1.Sumation(iSize);

    cout<<iRet<<"\n";

    return 0;
}