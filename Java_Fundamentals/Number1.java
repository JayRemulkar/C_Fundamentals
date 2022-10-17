import java.lang.*;
import java.util.*;

class Display1
{
    public int iSize;

    Display1(int A)
    {
        this.iSize = A;

    }

    public void Average()
    {   
        int iCnt = 0;
        int iSum= 0;
        int Arr[] = new int[iSize];
        
        Scanner sobj2 = new Scanner(System.in);

        System.out.println("Enter Elements of array ");

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj2.nextInt();
            iSum = iSum + Arr[iCnt];
        } 
        iSum = iSum/iSize;
        System.out.println("Average is "+iSum);
    }
}

class Number1
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements :");
        int iSize = sobj.nextInt();

        Display1 dobj = new Display1(iSize);
        dobj.Average();
    }   
}
