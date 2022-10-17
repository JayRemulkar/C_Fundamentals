import java.lang.*;

abstract class Demo
{
    public int i;
    public int j;

    public Demo()
    {
        System.out.println("inside Demo constructor...");
    }

    public void fun()
    {
        System.out.println("inside Demo fun...");
    }

    abstract public void gun();
}

class Hello extends Demo
{   
    public int x;
    public int y;

    public Hello()
    {
        System.out.println("inside Hello constructor...");
    }

    /*public void fun()
    {
        System.out.println("inside Hello fun...");
    }*/

    abstract public void gun();

    public void sun()
    {
        System.out.println("inside Hello sun...");
    }

    public void gun()
    {
        System.out.println("inside Hello gun...");
    }
}

class AbstractDemo1
{
    public static void main(String arr[])
    {
        Demo dobj;
        //dobj = new Demo();

        Hello hobj = new Hello();
        hobj.fun();
        hobj.sun();
        hobj.gun();
    }
}