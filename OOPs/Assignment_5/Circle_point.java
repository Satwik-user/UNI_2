import java.util.Scanner;
class Point
{
    void coordinates(int x1, int x2, int y1, int y2)
    {
        this.x1 = x1;
        this.x2 = x2;
        this.y1 = y1;
        this.y2 = y2;
    }
}
class Circle extends Point
{
    double area()
    {
        return Math.pow((this.x1 - this.x2), 2) + Math.pow((this.y1 - this.y2), 2);
    }
}

class Circle_point
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        Point p = new Point();
        System.out.println("Enter coordinates of centre and point on circumference:");
        x1 = sc.nextInt();
        y1 = sc.nextInt();
        x2 = sc.nextInt();
        y2 = sc.nextInt();
        p.coordinates(x1, x2, y1, y2);

        Circle c = new Circle();
        System.out.println("Area of the circle= " + c.area());
    }
}