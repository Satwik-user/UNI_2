class Parent {
    int x = 10;
    void display() { System.out.println("Parent method"); }
}

class Child extends Parent {
    int x = 20;
    void display() {
        System.out.println("Child method");
        System.out.println("Child x: " + x);
        System.out.println("Parent x: " + super.x);
        super.display();
    }
}

public class P6_SuperKeyword {
    public static void main(String args[]) {
        Child c = new Child();
        c.display();
    }
}
