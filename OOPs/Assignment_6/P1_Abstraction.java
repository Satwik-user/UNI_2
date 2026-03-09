abstract class Vehicle {
    abstract void drive();
    void stop() { System.out.println("Vehicle stopped"); }
}

class Car extends Vehicle {
    void drive() { System.out.println("Car is driving"); }
}

public class P1_Abstraction {
    public static void main(String args[]) {
        Vehicle v = new Car();
        v.drive();
        v.stop();
    }
}
