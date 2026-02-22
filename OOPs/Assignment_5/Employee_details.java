import java.util.Scanner;
class Employee
{
    String emp_id, emp_name;
    double basic_salary;
    void Employee(emp_id, emp_name, basic_salary)
    {
        this.emp_id = emp_id;
        this.emp_name = emp_name;
        this.basic_salary = basic_salary;
    }
    double gross()
    {
        double tax = (15 / 100) * this.basic_salary;
        return this.basic_salary - tax;
    }
}
class Employee_salary
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter employee id, name, basic salary:");
        String id = 
    }
}