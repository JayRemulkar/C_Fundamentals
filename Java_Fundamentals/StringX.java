import java.io.*;

class StringX 
{
    public static void main(String arr[])
    {
        String str1 = "Hello";
        String str2 = "World";

        String str7 = "NewWorld";

        System.out.println(str2);    // Hello
        System.out.println(str1.length());  //5

        String str3 = str1+str2;
        System.out.println(str3); 

        String str4 = new String("Hello");
        String str5 = new String("World");
        String str6 = new String("Hello"); 

    }
    
}
