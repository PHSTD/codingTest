class Program
{
    static void Main()
    {
        int t = int.Parse(Console.ReadLine());

        for (int i = 0; i < t; i++)
        {
            string[] input = Console.ReadLine().Split();
            int r = int.Parse(input[0]);
            string s = input[1];

            string result = "";

            foreach (char c in s)
            {
                for (int j = 0; j < r; j++)
                {
                    result += c;
                }
            }

            Console.WriteLine(result);
        }
    }
}