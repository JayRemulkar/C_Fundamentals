import java.lang.*;
import java .io.*;

class Input1 
{
    public static void main(String arr[]) throws IOException
    {
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);

        System.out.println("Enter Your Name :");
        String name = bobj.readLine();

        System.out.println("Your name is :"+name);
    }
    
}
