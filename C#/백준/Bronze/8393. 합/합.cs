class Program
{
    static void Main()
    {
        int T = int.Parse(Console.ReadLine());
        int total = 0;

        for (int i = T - 1; i >= 0 ; i--)
        {
            total += i + 1;
        }
        Console.WriteLine(total);
    }
}