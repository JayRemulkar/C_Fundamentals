import java.lang.*;
import java.util.*;

class Array
{
    public int iSize;

    Array(int a)
    {
        this.iSize = a;
    }

    void JaggedArr()
    {
        int iCnt = 0;
        int iNo = 0;

        Scanner sobj2 = new Scanner(System.in);
        int Arr[][] = new int[iSize][];

        do
        {
            System.out.println("Enter the size for"+iCnt+"element");
            iNo = sobj2.nextInt();
            Arr[iCnt] = new int[iNo];
            iNo = 0;
            iCnt++;
            
        }while(iCnt < (iSize-1));
    }
}
class Display3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = sobj.nextInt();

        Array aobj = new Array(iSize);
        aobj.JaggedArr();
    }
}