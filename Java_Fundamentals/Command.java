import java.lang.*;


class Command
{
    public static void main(String Arr[])
    {   
        System.out.println("Number of command line argument is  : "+ Arr.length);
        System.out.println("First Number is : "+ Arr[0]);
        System.out.println("First Number is : "+ Arr[1]);

        int ans = Integer.parseInt(Arr[0])+ Integer.parseInt(Arr[1]);
        System.out.println("Addition is : "+ ans);

    }
} 