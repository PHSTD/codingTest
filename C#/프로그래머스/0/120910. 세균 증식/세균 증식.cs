using System;

public class Solution {
    public int solution(int n, int t) {
        int answer = 0;
        answer = (int)(Math.Pow(2 ,t) * n);
        return answer;
    }
}