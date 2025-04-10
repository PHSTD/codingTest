class Program
{
    static void Main()
    {
        // 입력 받기
        string[] input = Console.ReadLine().Split();

        // 숫자를 뒤집기
        string reversedA = ReverseString(input[0]);
        string reversedB = ReverseString(input[1]);

        // 정수로 변환
        int numA = int.Parse(reversedA);
        int numB = int.Parse(reversedB);

        // 더 큰 수 출력
        Console.WriteLine(Math.Max(numA, numB));
    }

    // 문자열을 뒤집는 함수
    static string ReverseString(string s)
    {
        char[] arr = s.ToCharArray();
        Array.Reverse(arr);
        return new string(arr);
    }
}
