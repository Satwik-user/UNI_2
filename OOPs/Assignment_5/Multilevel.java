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
        System.out.println("#1 level of inheritance of " + b.display);
    }
}
class Child_2 extends Base
{
    void child_display_2()
    {
        Base b = new Base();
        Child_1 c1 = new Child_1();
        
    }
}