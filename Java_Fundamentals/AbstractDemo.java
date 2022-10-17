import java.lang.*;

abstract class RBI
{
    public int balance;

    public RBI()
    {
        this.balance = 0;
    }

    public void Credit(int Amount)
    {
        this.balance = this.balance+Amount;
    }

    public void Debit(int Amount)
    {
        this.balance = this.balance-Amount;
    }

    public abstract int calculateIntrest();
}

class SBI extends RBI
{
    public int AccountNumber;
    public int IFSC;

    public int calculateIntrest()
    {
        return 6;
    }
}

class PNB extends RBI
{
    public int AccountNumber;
    public int IFSC;

    public int calculateIntrest()
    {
        return 7;
    }
}

class AbstractDemo 
{
    public static void main(String arr[])
    {
        SBI sobj = new SBI();
        PNB pobj = new PNB();
        
        sobj.Credit(1000);
        sobj.Debit(100);
        System.out.println(sobj.balance);

    }
}
