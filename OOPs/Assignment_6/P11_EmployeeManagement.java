class Employee {
    int empID;
    String empName;
    
    Employee(int id, String name) { empID = id; empName = name; }
}

class Department extends Employee {
    String deptName;
    int deptCode;
    
    Department(int id, String name, String dept, int code) {
        super(id, name);
        deptName = dept;
        deptCode = code;
    }
}

class Salary extends Department {
    double basicSalary, allowances;
    
    Salary(int id, String name, String dept, int code, double basic, double allow) {
        super(id, name, dept, code);
        basicSalary = basic;
        allowances = allow;
    }
    
    void display() {
        System.out.println("ID: " + empID + " | Name: " + empName);
        System.out.println("Department: " + deptName + " | Code: " + deptCode);
        System.out.println("Total Salary: " + (basicSalary + allowances));
    }
}

public class P11_EmployeeManagement {
    public static void main(String args[]) {
        Salary s = new Salary(101, "John", "IT", 1001, 50000, 10000);
        s.display();
    }
}
