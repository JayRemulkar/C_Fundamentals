import java.lang.*;

class Demo extends Thread 
{
    public void run()     //Running state
    {
        
        
        System.out.println("Inside thread "+Thread.currentThread().getName());
        System.out.println("Inside thread "+Thread.currentThread().getPriority());
        
    }
}

class Mythread9
{
    public static void main(String arr[])
    {
        System.out.println("Inside main thread "+Thread.currentThread().getPriority());
            
        Demo dobj1 = new Demo();
        Thread t1 = new Thread(dobj1,"First");      // New state

        Demo dobj2 = new Demo();
        Thread t2 = new Thread(dobj2,"Second");

        t1.start();     //Runnable state
        t2.start();
       
        // dead state
    }
}