abstract class Accounts {
    double balance;
    int accountNumber;
    String accountHoldersName, address;
    
    Accounts(double b, int c, String d, String e) {
        balance = b; accountNumber = c; accountHoldersName = d; address = e;
    }
    
    abstract void withdrawal(double amount);
    abstract void deposit(double amount);
    
    void display() { System.out.println("Balance: " + balance + " | Account: " + accountNumber); }
}

class SavingsAccount extends Accounts {
    double rateOfInterest;
    
    SavingsAccount(double b, int c, String d, String e, double r) {
        super(b, c, d, e);
        rateOfInterest = r;
    }
    
    void withdrawal(double amount) { balance -= amount; }
    void deposit(double amount) { balance += amount; }
    
    void calculateAmount() { 
        balance = balance + (balance * rateOfInterest / 100);
        System.out.println("After interest: " + balance);
    }
}

public class P10_AbstractAccounts {
    public static void main(String args[]) {
        SavingsAccount s = new SavingsAccount(5000, 101, "John", "XYZ", 5);
        s.display();
        s.deposit(1000);
        s.withdrawal(500);
        s.calculateAmount();
    }
}
