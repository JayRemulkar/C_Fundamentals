import java.lang.*;

class Marvellous implements Runnable
{
    public void run()
    {
        System.out.println("Inside Thread :"+Thread.currentThread().getName());
    }
}

class Mythread3
{
    public static void main(String arr[])
    {
        Marvellous Mobj1 = new Marvellous();
        Thread t1 = new Thread(Mobj1,"First");

        Marvellous Mobj2 = new Marvellous();
        Thread t2 = new Thread(Mobj2,"Second");

        t1.start();
        t2.start();
    }    
}
