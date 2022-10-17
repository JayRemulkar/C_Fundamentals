import java.lang.*;

class Base
{
    public int x;

    Base(int A)
    {
        this.x = A;
    }
}
class Derived extends Base
{
    public int y;

    Derived(int B)
    {
        super(11);
        this.y = B;
    }
}
class Cont2
{
    public static void main(String arr[])
    {
        Derived dobj = new Derived(10);
        
        System.out.println(dobj.x);
        System.out.println(dobj.y);
    }
}