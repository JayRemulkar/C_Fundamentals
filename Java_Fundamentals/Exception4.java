import java.lang.*;
import java.util.*;

class Demo
{
    public int Division(int iValue1, int iValue2)throws ArithmeticException
    {
        return iValue1/iValue2;
    }
}

class Exception4
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.printf("Enter fist number :");
        int iNo1 = sobj.nextInt();

        System.out.printf("Enter second number :");
        int iNo2 = sobj.nextInt();

        Demo dobj = new Demo();
        
        try
        {
            int iRet = dobj.Division(iNo1,iNo2);
            System.out.println("Division is : "+iRet);
        }
        catch(ArithmeticException obj)
        {
            System.out.println("inside catch...");
            System.out.println(obj);
        }
        finally
        {
            System.out.println("inside finally...");
            sobj.close();
        }
   
    }

}
