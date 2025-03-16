class Program
{
    static void Main()
    {
        string[] str = Console.ReadLine().Split();
        long i1 = long.Parse(str[0]);
        long i2 = long.Parse(str[1]);
        long i3 = long.Parse(str[2]);

        Console.WriteLine(i1 + i2 + i3);
    }
}