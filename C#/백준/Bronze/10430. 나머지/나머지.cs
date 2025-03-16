class Program
{
    static void Main(string[] args)
    {
        string[] inputs = Console.ReadLine().Split();
        int i1 = int.Parse(inputs[0]);
        int i2 = int.Parse(inputs[1]);
        int i3 = int.Parse(inputs[2]);
        
        Console.WriteLine("{0}", (i1 + i2) % i3);
        Console.WriteLine("{0}", ((i1 % i3) + (i2 % i3)) % i3);
        Console.WriteLine("{0}", (i1 * i2) % i3);
        Console.WriteLine("{0}", ((i1 % i3) * (i2 % i3))%i3);
    }
}