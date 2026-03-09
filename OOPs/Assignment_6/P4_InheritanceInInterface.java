interface Shape { void area(); }
interface ColoredShape extends Shape { void color(); }

class Circle implements ColoredShape {
    public void area() { System.out.println("Area of circle: " + (3.14 * 5 * 5)); }
    public void color() { System.out.println("Color: Red"); }
}

public class P4_InheritanceInInterface {
    public static void main(String args[]) {
        Circle c = new Circle();
        c.area();
        c.color();
    }
}
