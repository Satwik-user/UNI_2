class Parent {
    int a;
    Parent(int x) { a = x; System.out.println("Parent a: " + a); }
}

class Child extends Parent {
    int b;
    Child(int x, int y) {
        super(x);
        b = y;
        System.out.println("Child b: " + b);
    }
}

public class P8_SuperConstructorWithParam {
    public static void main(String args[]) {
        Child c = new Child(10, 20);
    }
}
