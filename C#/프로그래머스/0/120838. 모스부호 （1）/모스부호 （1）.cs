using System;
using System.Collections.Generic;

public class Solution {
    public string solution(string letter) {
        string answer = "";
        Dictionary<string, string> morseMap = new Dictionary<string, string>()
        {
            {".-", "a"},   {"-...", "b"}, {"-.-.", "c"}, {"-..", "d"},
            {".", "e"},    {"..-.", "f"}, {"--.", "g"},  {"....", "h"},
            {"..", "i"},   {".---", "j"}, {"-.-", "k"},  {".-..", "l"},
            {"--", "m"},   {"-.", "n"},   {"---", "o"},  {".--.", "p"},
            {"--.-", "q"}, {".-.", "r"},  {"...", "s"},  {"-", "t"},
            {"..-", "u"},  {"...-", "v"}, {".--", "w"},  {"-..-", "x"},
            {"-.--", "y"}, {"--..", "z"}
        };

        string[] codes = letter.Split(' ');

        foreach (var code in codes)
        {
            answer += morseMap[code];
        }
        return answer;
    }
}