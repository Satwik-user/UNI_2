class FinalVariable {
    final int MAX_VALUE = 100;
    
    void testFinalVar() {
        System.out.println("MAX_VALUE: " + MAX_VALUE);
    }
}

// 2. FINAL METHOD - Cannot be overridden
class Parent {
    final void importantMethod() {
        System.out.println("This method cannot be overridden");
    }
    
    void normalMethod() {
        System.out.println("This method can be overridden");
    }
}

class Child extends Parent {
    @Override
    void normalMethod() {
        System.out.println("Child overrides normal method");
    }
}

// 3. FINAL CLASS - Cannot be inherited
final class ImmutableClass {
    private String data;
    
    ImmutableClass(String d) { data = d; }
    void display() { System.out.println("Data: " + data); }
}



public class final_implementation {
    public static void main(String args[]) {
        // Test Final Variable
        System.out.println("=== Final Variable ===");
        FinalVariable fv = new FinalVariable();
        fv.testFinalVar();
        
        // Test Final Method
        System.out.println("\n=== Final Method ===");
        Parent p = new Parent();
        p.importantMethod();
        p.normalMethod();
        
        Child c = new Child();
        c.importantMethod();  // Calls parent's final method
        c.normalMethod();     // Calls overridden method
        
        // Test Final Class
        System.out.println("\n=== Final Class ===");
        ImmutableClass ic = new ImmutableClass("Immutable");
        ic.display();
        
        System.out.println("\nFinal keyword prevents modification/inheritance");
    }
} 