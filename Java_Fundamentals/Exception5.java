import java.lang.*;
import java.util.*;

class AgeInvalid extends Exception
{
    public AgeInvalid(String str)
    {
        super(str);
    }
}

class Exception5
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter your age :");

        int iAge = sobj.nextInt();

        try(iAge<18)
        {
            throw new AgeInvalid("Age is below 18");
        }
        catch(AgeInvalid obj)
        {
            System.out.println(obj);
        }    
    }
}