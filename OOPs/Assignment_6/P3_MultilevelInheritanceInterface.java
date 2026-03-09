interface Animal { void eat(); }
interface Pet extends Animal { void play(); }

class Cat implements Pet {
    public void eat() { System.out.println("Cat eats"); }
    public void play() { System.out.println("Cat plays"); }
}

public class P3_MultilevelInheritanceInterface {
    public static void main(String args[]) {
        Cat c = new Cat();
        c.eat();
        c.play();
    }
}
