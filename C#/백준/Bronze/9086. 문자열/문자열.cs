class Program
{
    static void Main()
    {
        int loop = int.Parse(Console.ReadLine());
        for (int i = 0; i < loop; i++)
        {
            string s = Console.ReadLine();
            int z = 0;
            bool p = int.TryParse(s, out z);
            if (p == false)
            {
                Console.Write(s[0]);
                Console.Write(s[s.Length - 1]);
            }
            Console.WriteLine();
        }
    }
}