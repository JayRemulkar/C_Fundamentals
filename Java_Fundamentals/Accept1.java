import java.lang.*;
import java.util.*;

class Display
{
    public String str;

    Display(String strrr)
    {
        this.str = strrr;
    }

    public void Lenght()
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt < str.length(); iCnt++)
        {
            
        }
        System.out.println("length of string is : "+iCnt);
    }
}

class Accept1
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter word : ");
        String str = sobj.nextLine();

        Display dobj = new Display(str);
        dobj.Lenght();
    }
}