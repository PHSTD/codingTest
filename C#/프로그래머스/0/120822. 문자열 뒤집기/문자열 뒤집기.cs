using System;

public class Solution {
    public string solution(string my_string) {
        string answer = "";
         for (int i = my_string.Length ; i > 0  ; i--)
            {
                answer += my_string[i-1].ToString();
            }
        return answer;
    }
}