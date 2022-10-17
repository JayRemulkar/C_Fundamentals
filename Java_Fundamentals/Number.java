import java.lang.*;
import java.util.*;

class Display
{
    public int iSize;

    Display(int A)
    {
        this.iSize = A;

    }

    public void LargestNumber()
    {   
        int iCnt = 0;
        int LNum = 0;
        int Arr[] = new int[iSize];
        
        Scanner sobj2 = new Scanner(System.in);

        System.out.println("Enter Elements of array...");

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj2.nextInt();
            
            if(LNum<Arr[iCnt])
            {
                LNum = Arr[iCnt];
            }
        }
        System.out.println("Largest Number is "+LNum);
    }
}

class Number
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements :");
        int iSize = sobj.nextInt();

        Display dobj = new Display(iSize);
        dobj.LargestNumber();
    }   
}
