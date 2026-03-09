class Vehicle {
    String regNumber;
    String brand;
    
    Vehicle(String reg, String br) { regNumber = reg; brand = br; }
}

class Engine extends Vehicle {
    String engineType;
    double capacity;
    
    Engine(String reg, String br, String type, double cap) {
        super(reg, br);
        engineType = type;
        capacity = cap;
    }
}

class Car extends Engine {
    double fuelConsumption;
    
    Car(String reg, String br, String type, double cap, double fuel) {
        super(reg, br, type, cap);
        fuelConsumption = fuel;
    }
    
    void calculateEfficiency() {
        double efficiency = 100 / fuelConsumption;
        System.out.println("Fuel Efficiency: " + efficiency + " km/l");
    }
    
    void display() {
        System.out.println("Registration: " + regNumber + " | Brand: " + brand);
        System.out.println("Engine: " + engineType + " | Capacity: " + capacity);
        calculateEfficiency();
    }
}

public class P12_VehicleManagement {
    public static void main(String args[]) {
        Car c = new Car("DL-01-AB-1234", "Toyota", "Petrol", 1.5, 8);
        c.display();
    }
}
