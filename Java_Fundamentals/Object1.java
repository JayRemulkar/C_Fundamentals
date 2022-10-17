import java.lang.*;

class Employee
{
    public String name;
    public int Salary;

    public Employee(String str,int no)
    {
        this.name = str;
        this.Salary = no;
    }

    public String toString()
    {
        return "Employee name "+name+" Having Salary "+Salary;
    }

}

class Object1
{
    public static void main(String arr[])
    {
        Employee eobj = new Employee("jay",12000);
        System.out.println(eobj.toString());


    }
}