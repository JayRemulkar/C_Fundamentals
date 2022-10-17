import java.lang.*;
import java.util.*;

class Display
{
    public char Arr[];

    Display(String strrr)
    {
        this.Arr = strrr.toCharArray();
    }

    public void Lenght()
    {
        int iCnt = 0;
        int iSum = 0;
        int Bword = 0;

        //System.out.println("length of Array is : "+Arr.length);

        //System.out.println(Arr[0]);

       for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] != ' ')
            {
                iSum++;
                
                if(Bword <= iSum)
                {
                    Bword = iSum;
                }
            }
            if(Arr[iCnt] == ' ')
            {
                iSum = 0;
                
                if(Bword < iSum)
                {
                    Bword = iSum;
                    iSum = 0;           
                }
            }
            else if(Arr[iCnt] == Arr[Arr.length-1])
            {
                if(Bword <= iSum)
                {
                    Bword = iSum;
                }
            }          
        }

        System.out.println("length of biggest word of string : "+Bword);
    }
}
class Accept3
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        Display dobj = new Display(str);
        dobj.Lenght();
    }
}