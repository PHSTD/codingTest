class Program
{
    static void Main()
    {
        int loop = int.Parse(Console.ReadLine());
        string num = Console.ReadLine();
        // Console.WriteLine(num);
        int total = 0;
        for (int i = 0; i < loop; i++)
        {
            // Console.WriteLine(num[i]);
            total += int.Parse(num[i].ToString());
        }
        Console.WriteLine(total);
    }
}