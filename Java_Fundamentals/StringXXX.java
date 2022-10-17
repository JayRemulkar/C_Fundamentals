import java.io.*;

class StringXXX
{
    public static void main(String ar[])
    {
        int i = 0;
        String str = "Marvellous";
        
        char arr[] = str.toCharArray();

        for(i = 0; i <= str.length(); i++ )
        {
            System.out.println(arr[i]);
        }
    }
}