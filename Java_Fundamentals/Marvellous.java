import java.lang.*;

class Demo
{
    
    public int i;
    public int j;

    public Demo()
    {
        this.i = 0;
        this.j = 0;
    }

    public Demo(int x,int y)
    {
        this.i = x;
        this.j = y;
    }

    public void fun()
    {
        System.out.println("inside fun");
    }

    public void gun()
    {
        System.out.println("inside gun");
    }
}

class Marvellous 
{
    public static void main(String arr[])
    {
        System.out.println("inside main");
        Demo obj1 = new Demo();
        
        obj1.fun();     //fun(obj)
        obj1.fun();     //gun(obj)
        
        obj1.i = 10;
        obj1.j = 11;
        
        System.out.println(obj1.i);
        System.out.println(obj1.j);

        Demo obj2 = new Demo(20,21);
        
        obj2.fun();     //fun(obj)
        obj2.fun();     //gun(obj)

        System.out.println(obj2.i);
        System.out.println(obj2.j);

    }    
}
