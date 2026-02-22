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
    void child_
}