import java.lang.*;

/*class Object
{
    // content
}*/

class Base             //class Base: public Object
{
    public int i;
    public int j;

    public void fun()
    {
        System.out.println("inside Base fun...");
    }
}

class Derived extends Base      //class Derived : public Base
{
    public int x;
    public int y;

    public void gun()
    {
        System.out.println("inside Derived gun...");
    }
}

class Derivedx extends Derived      // class Derivedx : public Derived
{
    public int a;

    public void sun()
    {
        System.out.println("inside Derivedx sun...");
    }
}

class Inheritance3  
{
  
    public static void main(String arr[])
    {
        System.out.println("inside main...");
        Derived dobj = new Derived(); 
        dobj.sun();
     
    }   
}
