import java.util.*;

class Exception2
{
    public static void main(String arr[])
    {
        int iAns = 0;
        int iNo1 = 0;
        int iNo2 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number :");
        iNo1 = sobj.nextInt();
        
        System.out.println("Enter second number :");
        iNo2 = sobj.nextInt();

        try
        {
            iAns = iNo1/iNo2;       //Exception prone code
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Exception occured as : "+obj);
        }
        finally
        {
            sobj.close();
        }
        System.out.println("Division is : "+iAns);
    }    
}
