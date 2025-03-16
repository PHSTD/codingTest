class Program
{
    static void Main()
    {
        int T = int.Parse(Console.ReadLine());

        for (int i = 0; i < T; i++)
        {
            string input = Console.ReadLine();
            if (string.IsNullOrWhiteSpace(input))
            {
                Console.WriteLine("유효한 입력이 아닙니다. 다시 입력해주세요.");
                i--;
                continue;
            }

            string[] inputs = input.Split(new char[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);

            if (inputs.Length < 2)
            {
                Console.WriteLine("두 개의 숫자를 공백으로 구분해서 입력해주세요.");
                i--;
                continue;
            }

            int A = int.Parse(inputs[0]);
            int B = int.Parse(inputs[1]);
            Console.WriteLine(A + B);
        }
    }
}