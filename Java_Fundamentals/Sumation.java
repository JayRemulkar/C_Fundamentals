import java.lang.*;

class Arithmatic
{
    public int Sum(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        if(iNo<0)
        {
            iNo = -iNo;
        }
    
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iSum = iCnt + iSum;
        }
        return iSum;
    }   
}

class Sumation
{
    public static void main(String arr[])
    {   
        int iValue = 4;
        int iRet = 0;
        
        Arithmatic obj1 = new Arithmatic();
        
        iRet = obj1.Sum(iValue);

        System.out.println(iRet);
    }
}