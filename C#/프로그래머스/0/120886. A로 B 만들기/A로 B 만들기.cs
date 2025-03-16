using System;
using System.Linq;

public class Solution {
    public int solution(string before, string after) {
        int answer = 0;
        if(before.Length != after.Length)
            return 0;

        char[] beforeChars = before.ToCharArray();
        char[] afterChars = after.ToCharArray();
        System.Array.Sort(beforeChars);
        System.Array.Sort(afterChars);

        answer = new string(beforeChars) == new string(afterChars) ? 1 : 0;
        return answer;
    }
}