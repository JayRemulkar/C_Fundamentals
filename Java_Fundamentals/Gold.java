import java.lang.*;
import java.util.Scanner;

class Jweller
{
    public void JwellersPortal(int iWeight)
    {
        switch(iWeight)
        {
            case 1 :
                System.out.println("Your bill amount is 4000 \n");
                break;

            case 2 :
                System.out.println("Your bill amount is 8000 \n");
                break;

            case 5 :
                System.out.println("Your bill amount is 20000 \n");
                break;

            case 10 :
                System.out.println("Your bill amount is 40000 \n");
                break;

            default:
                System.out.println("invalid Weight \n \n");
                break;
        }
    }
}

class Gold
{
    public static void main(String arr[])
    {
        Scanner iValue = new Scanner(System.in);
        System.out.println("Enter gold in gram \n");

        int input = iValue.nextInt();
        
    }
}