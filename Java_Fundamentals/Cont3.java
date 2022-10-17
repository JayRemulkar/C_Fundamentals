import java.lang.*;

class Base
{
    public int i;
    public int j;
    public int k;

    Base(int A)
    {   
        this(10,11);
        this.i = A;
    }
    Base(int B, int c)
    {
        this.j = B;
        this.k = c;
    }
}

class Derived extends Base
{
    public int x;

    Derived(int A)
    {
        super(51);
        this.x = A;
    }
}

class Cont3
{
    public static void main(String arr[])
    {
        Derived dobj = new Derived(21);
        
        System.out.println(dobj.x);
        System.out.println(dobj.i);
        System.out.println(dobj.j);
        System.out.println(dobj.k);
    }
}