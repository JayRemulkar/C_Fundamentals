import java.lang.*;

class Demo
{
    public int i;
    public final int j = 20;
    public final int k;

    public Demo()
    {
        this.i = 10;
        this.k = 30;
    }
    public Demo(int a,int b)
    {
        this.i = a;
        this.k = b;
    }

    public void fun()
    {
        i++;        //A
        //j++;      //NA
        //k++;      //NA
    }
}

class Final1
{
    public static void main(String arr[])
    {
        Demo obj = new Demo();
        obj.fun();
        System.out.println(obj.i);
        System.out.println(obj.j);
        System.out.println(obj.k);

        Demo obj2 = new Demo(11,21);
        obj2.fun();
        System.out.println(obj2.i);
        System.out.println(obj2.j);
        System.out.println(obj2.k);
    }

}