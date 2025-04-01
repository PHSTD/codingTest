class Program
{
    static void Main()
    {
        string s = Console.ReadLine();

        int loop = 0;
        foreach (char k in s)
        {
            loop++;
        }
        Console.WriteLine(loop);
    }
}