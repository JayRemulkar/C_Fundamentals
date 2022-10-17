import java.lang.*;
import java.util.*;

class Array4 
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0;
        int j = 0;

        int iSize1 = 0;
        int iSize2 = 0;
        int iSize3 = 0;

        System.out.println("enter the size of 1st one dimensional array :");
        iSize1 = sobj.nextInt();
        System.out.println("enter the size of 2st one dimensional array :");
        iSize2 = sobj.nextInt();
        System.out.println("enter the size of 3st one dimensional array :");
        iSize3 = sobj.nextInt();

        int arr[][] = new int[3][];

        arr[0] = new int[iSize1];
        arr[1] = new int[iSize2];
        arr[2] = new int[iSize3];

        System.out.println("Enter the elements :");

        for(i = 0; i < arr.length; i++)
        {
            for(j = 0; j < arr[i].length; j++)
            {
                arr[i][j] = sobj.nextInt();
            }
        }

        System.out.printf("Entered elements :");

        for(i = 0; i < arr.length; i++)
        {
            for(j = 0; j < arr[i].length; j++)
            {
                System.out.println(arr[i][j]);
            }
        }
    }
    
}

