import java.lang.*;
import java.util.*;

// write a program which accept matrix and and check whether the matrix is identity matrix or not.
// identity matrix is a square matrix with 1's along along the diagonal from upper left to lower right and 0's in all other positions.
// if it satisfies the structure as explained before then the matrix is called as identity matrix
// 00 01 02 03 
// 10 11 12 13 
// 20 21 22 23 
// 30 31 32 33

class ArithematicPattern
{
    private int irow;
    private int icol;
    private int Arr[][];

    public ArithematicPattern(int Row,int Col)
    {
        this.irow = Row;
        this.icol = Col;
        this.Arr = new int[irow][icol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements...");
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
        sobj.close();
    }

    public void Display()
    {
        System.out.println("Entered Elements are...");
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public boolean ChkIdentity()
    {  
        int i = 0;
        int j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(i == j)
                {
                    if(Arr[i][j] != 1)
                    {
                        break;
                    }
                }
                else
                {
                    if(Arr[i][j] != 0)
                    {
                        break;
                    }
                }
            }
            if(j != Arr.length)
            {
                break;
            }
        }
        
        if((i == Arr.length) && (j == Arr.length))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program4
{
    public static void main(String arg[])
    {
        boolean bret;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the rows...");
        int irow = sobj.nextInt();

        System.out.println("Enter the columns...");
        int icol = sobj.nextInt();

        if(irow != icol)
        {
            System.out.println("Invalid Input");
            return;
        }

        ArithematicPattern obj = new ArithematicPattern(irow,icol);

        obj.Accept();
        obj.Display();
        bret = obj.ChkIdentity();

        if(bret == true)
        {
            System.out.println("It is Identity Matrix");
        }
        else
        {
            System.out.println("It is not Identity Matrix");
        }
        sobj.close();
    }
}