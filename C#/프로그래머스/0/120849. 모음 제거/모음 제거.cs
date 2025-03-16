using System;

public class Solution {
    public string solution(string my_string) {
        string answer = "";
        string[] strs = { "a", "e", "i", "o", "u" };

        for (int i = 0; i < my_string.Length; i++)
        {
            bool b = false;
            for (int j = 0; j < strs.Length; j++)
            {
                if (char.Parse(strs[j]) == char.Parse(my_string[i].ToString()))
                {
                    b = true;
                    break;
                }
            }

            if (b == false)
            {
                answer += my_string[i];
            }
        }
        return answer;
    }
}