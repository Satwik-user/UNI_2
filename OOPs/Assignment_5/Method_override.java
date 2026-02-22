class Base
{
    void display()
    {
        System.out.println("This is Base Class Method!");
    }
}
class Child extends Base
{
    void display()
    {
        System.out.println("This is Child Class Method!");
    }
}
class Method_override
{
    public static void main(String args[])
    {
        Base obj = new Child();
        obj.display();
    }
}