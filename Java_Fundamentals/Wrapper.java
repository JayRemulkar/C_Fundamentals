import java.io.*;

class Wrapper 
{
    public static void main(String arr[]) throws IOException
    {
        int no  = 10;

        Integer iobj = new Integer(10);

        int i = iobj;           // Unboxing

        Integer iobj2 = no;         // Boxing

        System.out.println(no);
        System.out.println(iobj);
        System.out.println(i);
        System.out.println(iobj2);


    }
    
}
