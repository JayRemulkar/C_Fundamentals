import java.lang.*;

final class Base 
{
    public void fun()
    {
        System.out.println("inside Base fun...");
    }
}

class Derived 
{   
    public Base bobj = new Base();

    public void gun()
    {
        System.out.println("inside Derived gun...");
    } 
}

class Final2 
{
    public static void main(String arr[])
    {
        Derived obj1 = new Derived();
        obj1.bobj.fun();
        obj1.gun();
     
    }
    
}
