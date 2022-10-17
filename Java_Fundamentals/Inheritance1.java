import java.lang.*;

class Base
{
    public int i;
    public int j;

    public Base()
    {
        System.out.println("inside Base constructor...");
    }

    public void fun()
    {
        System.out.println("inside Base fun...");
    }

    public void fun(int x)
    {
        System.out.println("inside Base fun with integer argument...");
    }

    public void gun()
    {
        System.out.println("inside Base gun...");
    }

}

class Derived extends Base
{
    public int x;
    public int y;

    public Derived()
    {
        System.out.println("inside Derived constructors...");
    }

    public void sun()
    {
        System.out.println("inside Derived sun...");
    }
}

class Inheritance1          
{
    static 
    {
        System.out.println("inside static block...");
    }
        
    public static void main(String arr[])
    {
        System.out.println("inside main...");
        Derived dobj = new Derived(); 
        dobj.fun();
        dobj.fun(12);
        dobj.gun();
        dobj.sun();

    }   
}
