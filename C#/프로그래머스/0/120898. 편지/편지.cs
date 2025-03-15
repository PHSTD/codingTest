using System;
using System.Linq; 

public class Solution {
    public int solution(string message) {
        int answer = 0;
        for (int i = 0; i <= message.Count(); i++)
        {
            answer = i * 2;
        }

        return answer;
    }
}