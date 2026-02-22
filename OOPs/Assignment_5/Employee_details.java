class Employee
{
    String emd_id, emp_name;
    double basic_salary;
    void Employee(emp_id, emp_name, basic_salary)
    {
        this.emp_id = emp_id;
        this.emp_name = emp_name;
        this.basic_salaray = basic_salary;
    }
    double gross()
    {
        double tax = (15 / 100) * this.basic_salary;
        return basic_salary - tax;
    }
}