class Program
{
    static void Main(string[] args)
    {
        int i1 = int.Parse(Console.ReadLine());
        int i2 = int.Parse(Console.ReadLine());
        Console.WriteLine("{0}", i1 * (i2 % 10));
        Console.WriteLine("{0}", i1 * (i2 / 10 % 10));
        Console.WriteLine("{0}", i1 * (i2 / 100 % 10 ));
        Console.WriteLine("{0}", i1 * i2);
    }
}