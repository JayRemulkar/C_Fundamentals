import java.lang.*;

class Demo
{

}

class Hash
{
    public static void main(String arr[])
    {
        String str1 = "Marvellous";
        String str2 = "Marvellous";
        String str3 = "Infosystem";
        Demo dobj = new Demo();

        System.out.println("Hashcode of str1 : "+str1.hashCode());
        System.out.println("Hashcode of str1 : "+str2.hashCode());
        System.out.println("Hashcode of str1 : "+str3.hashCode());
        System.out.println("Hashcode of str1 : "+dobj.hashCode());

    }
}