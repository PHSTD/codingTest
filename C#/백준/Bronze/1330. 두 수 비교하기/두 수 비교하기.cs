class Program
{
    static void Main()
    {
        string[] strs = Console.ReadLine().Split();
        int i1 = int.Parse(strs[0]);
        int i2 = int.Parse(strs[1]);

        if (i1 > i2)
        {
            Console.WriteLine(">");
        }
        if (i1 < i2)
        {
            Console.WriteLine("<");
        }
        else if(i1 == i2)
        {
            Console.WriteLine("==");
        }
    }
}