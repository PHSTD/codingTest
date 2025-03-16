class Program
{
    static void Main()
    {
        int i1 = int.Parse(Console.ReadLine());

        for (int i = 1; i <= 9; i++)
        {
            Console.WriteLine($"{i1} * {i} = {i1 * i}");
        }
        
    }
}