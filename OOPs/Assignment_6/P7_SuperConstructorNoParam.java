class Parent {
    Parent() { System.out.println("Parent constructor"); }
}

class Child extends Parent {
    Child() {
        super();
        System.out.println("Child constructor");
    }
}

public class P7_SuperConstructorNoParam {
    public static void main(String args[]) {
        Child c = new Child();
    }
}
