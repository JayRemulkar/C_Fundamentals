import java.io.*;

class Input3 
{
    public static void main(String arr[]) throws IOException
    {
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);

        System.out.println("Enter String :");
        String str = bobj.readLine();

        System.out.println("Enter Integer :");
        int iNo = Integer.parseInt(bobj.readLine());

        System.out.println("Enter Float :");
        float fNo = Float.parseFloat(bobj.readLine());

        System.out.println("Enter Double :");
        double dNo = Double.parseDouble(bobj.readLine());

        System.out.println("Entered string is : "+str);
        System.out.println("Entered interger is : "+iNo);
        System.out.println("Entered float is : "+fNo);
        System.out.println("Entered double is : "+dNo);
    }
    
}
