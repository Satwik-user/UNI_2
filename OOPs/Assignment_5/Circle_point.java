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
        return Math.pow((x1 - x2), 2) + Math.pow((y1 - y2), 2);
    }
}

class Circle_point
{
    public static void main(String args[])
    {
        
    }
}