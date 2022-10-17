import java.util.*;

class Numbers
{
    public int iNo;

    public Numbers(int x)
    {
        this.iNo = x;
    }

    public int SumFactor()
    {
        
        int iCnt = 0;
        int iSum = 0;

        if(iNo<0)
        {
            iNo = -iNo;
        }
        
        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if((iNo%iCnt)==0)
            {
                iSum = iCnt + iSum;
            }
        }
        return iSum;
    }

    public boolean CheckPerfect()
    {
        int iAns = 0;
        iAns = SumFactor();

        if(iAns == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program29
{
    public static void main(String arr[])
    {
        boolean bRet = false; 

        Scanner sobj = new Scanner(System.in);

        Numbers nobj = new Numbers(15);

        bRet = nobj.CheckPerfect();

       if(bRet == true)
       {
           System.out.println(nobj.iNo+" is Perfect Number ");
       }
       else
       {
        System.out.println(nobj.iNo+" is not Perfect Number ");
       }
    }
}