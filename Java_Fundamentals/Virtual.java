import java.lang.*;

class Base
{
    public int i,j;

    public void fun()
    {   System.out.println("inside Base fun..."); }

    public void gun()
    {   System.out.println("inside Base gun..."); }

    public void sun()
    {   System.out.println("inside Base sun..."); }

} 

class Derived extends Base
{
    public int x,y;

    public void fun()
    {   System.out.println("inside Derived fun..."); }

    public void sun()
    
    {   System.out.println("inside Derived sun..."); }

    public void run()
    {   System.out.println("inside Derived run..."); }

}

class Virtual 
{
    public static void main(String arr[])
    {
        Base obj = new Derived();

        obj.fun();
        obj.gun();
        obj.sun();
        //obj.run();
    }
}
