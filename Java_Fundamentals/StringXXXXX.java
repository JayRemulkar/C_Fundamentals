import java.io.*;

class StringXXXXX
{
    public static void main(String ar[])
    {
        String str1 = "Hello";
        String str2 = "Hello";
        String str3 = new String("Hello");

        if(str1 == str3)  //if(100 == 100)
        {
            System.out.println("Strings are same...");
        }
        else
        {
            System.out.println("Strings are different...");
        }

        if(str1.equals(str3))       //if("Hello".equals("Hello"))
        {
            System.out.println("Strings are same...");
        }
        else
        {
            System.out.println("Strings are different...");
        }
    }
}