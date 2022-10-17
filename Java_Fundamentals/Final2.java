import java.lang.*;

class Base 
{
    public void fun()
    {
        System.out.println("inside Base fun...");
    }

    public final void gun()
    {
        System.out.println("inside Base gun...");
    }
}

class Derived extends Base
{
    public void fun()
    {
        System.out.println("inside Derived fun...");
    }

    /*public void gun()
    {
        System.out.println("inside Derived gun...");
    }*/
}

class Final2 
{
    public static void main(String arr[])
    {
        Derived obj = new Derived();
        obj.fun();
        obj.gun();
    }
    
}
