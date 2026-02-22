class Base
{
    void display()
    {
        System.out.println("Base Class");
    }
}
class Child_1 extends Base
{
    void child_display_1()
    {
        Base b = new Base();
        System.out.println("#1 level of inheritance of " + b.display());
    }
}
class Child_2 extends Base
{
    void child_display_2()
    {
        Base b = new Base();
        Child_1 c1 = new Child_1();
        c1.child_display_1();
        System.out.println("#2 level of inheritance of ");
    }
}
class Multilevel
{
    public static void main(String args[])
    {
        Child_2 c2 = new Child_2();
        c2.child_display_2();
    }
}