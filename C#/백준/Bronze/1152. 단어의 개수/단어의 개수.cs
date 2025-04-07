class Program
{
    static void Main()
    {
        string? t = Console.ReadLine();

        if (!string.IsNullOrWhiteSpace(t))
        {
            string[] w = t.Trim().Split(' ');
            Console.WriteLine(w.Length);
        }
        else
        {
            Console.WriteLine(0);
        }
    }
}