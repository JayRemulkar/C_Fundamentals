import java.lang.*;

class Base
{
    public int i;
    public int j;

    public Base()
    {
       
        System.out.println("inside Base constructor...");
        this.i = 10;
        this.j = 20;
    }
    
    public Base(int a,int b)
    {
        System.out.println("inside parameterized Base class...");
        this.i = a;
        this.j = b;
    }

    public void fun()
    {
        System.out.println("inside Base fun...");
    }
}

class Derived extends Base
{
    public int x;
    public int y;

    public Derived()
    {
        super(22,33);
        System.out.println("inside Derived constructors...");
        this.x = 30;
        this.y = 40;
    }


    public void sun()
    {
        System.out.println("inside Derived sun...");
        System.out.println(super.i);
        super.fun();
    }
}

class Inheritance2      
{
  
    public static void main(String arr[])
    {
        System.out.println("inside main...");
        Derived dobj = new Derived(); 
        dobj.sun();
     
    }   
}
