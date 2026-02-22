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
        
    }
}