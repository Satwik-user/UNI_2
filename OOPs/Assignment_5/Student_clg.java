class Student
{
    void display()
    {
        System.out.print("Student is from college ");
    }
}
class Student_clg extends Student
{
    void display_clg()
    {
        System.out.println("UEM");
    }
    public static void main(String args[])
    {
        Student s1 = new Student();
        s1.display();
        
    }
}