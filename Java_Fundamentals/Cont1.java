import java.lang.*;

class Demo
{
    public int iNo1;
    public int iNo2;
    public int iNo3;

    Demo(int A)
    {
        this(12,10);
        this.iNo1 = A;
    }

    Demo(int B,int C)
    {
        this.iNo2 = B;
        this.iNo3 = C;
    }
}

class Cont1
{
    public static void main(String arr[])
    {
        Demo dobj = new Demo(5);
        
        System.out.println(dobj.iNo1);
        System.out.println(dobj.iNo2);
        System.out.println(dobj.iNo3);
    }
}