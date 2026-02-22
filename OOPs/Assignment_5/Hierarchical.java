class Base
{
    void display()
    {
        System.out.println("Base class!");
    }
}
class Child_1 extends Base
{
    void child_display()
    {
        Base b = new Base();
        System.out.print("Accessing #1 ");
        b.display()
    }
}
class Child_2 extends Base
{
    void child_display()
    {
        Base b = new Base();
        System.out.println("Accessing #1 ");
        b.display();
    }
}
class Heirarchical
{
    public static void main(String args[])
    {
        Child_1 c1 = new Child_1();
        Child_2 c2 = new Child_2
    }
}