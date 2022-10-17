import java.lang.*;

class Demo extends Thread 
{
    public void run()     //Running state
    {
        for(int i = 0; i < 10; i++)
        {
            System.out.println("Value of i : "+i);
            try
            {
                Thread.sleep(1000);
            }
            catch(Exception obj)
            {

            }
        }
    }
}

class Mythread6 
{
    public static void main(String arr[]) throws Exception
    {
        Demo dobj1 = new Demo();
        Thread t1 = new Thread(dobj1,"First");      // New state

        Demo dobj2 = new Demo();
        Thread t2 = new Thread(dobj2,"Second");

        t1.start();     //Runnable state
       
        t1.join();
       
        t2.start();
       
        // dead state
    }
}