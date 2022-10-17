import java.lang.*;
import java .io.*;

class Input2 
{
    public static void main(String arr[]) 
    {
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);

        try
        {
            System.out.println("Enter Your Name :");
            String name = bobj.readLine();

            System.out.println("Your name is : "+name);

            System.out.println("Enter Your Age : ");
            int iAge = Integer.parseInt(bobj.readLine());

            System.out.println("Your Age : "+iAge);
        }
        catch(IOException obj)
        {
            System.out.println("Exception occured ");
        }
        finally
        {
            iobj = null;
            bobj = null;
        }
    }
}
