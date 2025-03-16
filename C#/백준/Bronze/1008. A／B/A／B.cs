using System;
class Program
{
    static void Main(string[] args)
    {
        string[] inputs = Console.ReadLine().Split();
        double f1 = double.Parse(inputs[0]);
        double f2 = double.Parse(inputs[1]);
            
        Console.WriteLine("{0:F9}", f1 / f2);
    }
}