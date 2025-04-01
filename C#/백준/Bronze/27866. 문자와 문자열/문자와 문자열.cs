class Program
{
    static void Main()
    {
        string s = Console.ReadLine();
        int i = int.Parse(Console.ReadLine());

        int loop = 1;
        foreach (char k in s)
        {
            if (loop++ == i)
            {
                Console.WriteLine(k);
            }
        }
    }
}