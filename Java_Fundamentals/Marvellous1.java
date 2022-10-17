import java.lang.*;

interface Circle
{
    float PI = 3.14f;       // public static final PI = 3.14

    float CalculateArea(float Radius);
    float CalculateCircumfarance(float Radius);
}

class Area implements Circle
{
    public float CalculateArea(float Radius)
    {
        return (PI *Radius*Radius);
    }

    public float CalculateCircumfarance(float Radius)
    {
        return (2 * PI *Radius);
    }
}

public class Marvellous1 
{
    public static void main(String arr[])
    {   
        float fRet = 0.0f;
        
        Area obj;
        obj = new Area();

        System.out.println("Value of PI is : "+Circle.PI);
        //Circle.PI = 6.14f;

        fRet = obj.CalculateArea(10.5f);
        System.out.println("Area is : "+fRet);

        fRet = obj.CalculateCircumfarance(10.5f);
        System.out.println("Circumferance is : "+fRet);
    }
}
    

