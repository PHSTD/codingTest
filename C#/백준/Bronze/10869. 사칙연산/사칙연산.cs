using System;
class Program
{
    static void Main(string[] args)
    {
        string[] inputs = Console.ReadLine().Split();
        int f1 = int .Parse(inputs[0]);
        int f2 = int .Parse(inputs[1]);
            
        Console.WriteLine("{0}", f1 + f2);
        Console.WriteLine("{0}", f1 - f2);
        Console.WriteLine("{0}", f1 * f2);
        Console.WriteLine("{0}", f1 / f2);
        Console.WriteLine("{0}", f1 % f2);
    }
}