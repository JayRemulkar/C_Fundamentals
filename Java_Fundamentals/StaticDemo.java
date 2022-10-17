import java.lang.*;

class Demo
{
    public int i;
    public int j;
    public static int k;

    static
    {
        System.out.println("inside static block..");
        k=10;
    }

    public Demo()
    {
        System.out.println("inside constructor...");
        this.i = 0;
        this.j = 0;
    }

    public void fun()
    {
        System.out.println("inside non static fun...");
        System.out.println(i);
        System.out.println(j);
        System.out.println(k);
    }
    
    public static void gun()
    {
        System.out.println("inside static void gun...");
        System.out.println(k);
        //k = 10;
    }
}

class StaticDemo 
{
    public static void main(String brr[])
    {
        Demo.gun();

        Demo obj;
        obj = new Demo();
        //obj.fun();

       // System.out.println(obj.i);
       // System.out.println(obj.j);
        //System.out.println(Demo.k);*/

    }
    
}
