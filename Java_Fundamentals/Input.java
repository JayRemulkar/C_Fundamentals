import java.util.*;

class Input 
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name");
        String name = sobj.nextLine();

        System.out.println("Enter your age");
        int Age = sobj.nextInt();

        System.out.println("enter your percentage");
        float percentage = sobj.nextFloat();

        System.out.println("Your name : "+name);
        System.out.println("Your Age : "+Age);
        System.out.println("Your percentage : "+percentage);
        sobj.close();
    }   
}
