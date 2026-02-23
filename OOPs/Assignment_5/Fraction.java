class Fraction
{
    Fraction(int numerator, int denominator)
    {
        System.out.println("Fraction:" + ()(numerator / denominator));
    }
    public static void main(String args[])
    {
        Fraction f1 = new Fraction(2, 3);
        Fraction f2 = new Fraction(3, 4);
        Fraction f3 = new Fraction(4, 5);
    }
}