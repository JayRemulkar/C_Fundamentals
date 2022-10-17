import java.lang.*;

class Mythread1 
{
    public static void main(String arr[])
    {
        System.out.println("Inside main...");

        Thread tobj = Thread.currentThread();

        System.out.println("Name of Current thread is "+tobj.getName());


    }    
}
