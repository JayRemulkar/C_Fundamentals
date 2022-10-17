import java.lang.*;
import java.util.*;

class Exception3
{
    public static void main(String ar[])
    {
        int Arr[] = {10,20,30,40,50};
        Scanner sobj = new Scanner(System.in);

        System.out.printf("Enter the index :");
        int iIndex = sobj.nextInt();
        try
        {
            System.out.println("Element at Index is : "+Arr[iIndex]);
        }
        catch(ArrayIndexOutOfBoundsException obj)
        {
            System.out.println("inside catch...");
            System.out.println(obj);
        }
        catch(Exception obj)
        {
            System.out.println(obj);
        }
        finally
        {
            System.out.println("inside finally...");
            sobj.close();
        }
        System.out.println("End of Application...");
    }

}
