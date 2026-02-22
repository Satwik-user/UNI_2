import java.util.Scanner;
class Employee
{
    String emp_id, emp_name;
    double basic_salary;
    void Employee(int emp_id, int emp_name, basic_salary)
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
        String id = sc.nextInt();
        String name = sc.nextInt();
        double salary = sc.nextInt();

        Employee emp = new Employee(id, name, salary);
        System.out.println("Gross Salary of Employee+ " + emp.gross());
    }
}