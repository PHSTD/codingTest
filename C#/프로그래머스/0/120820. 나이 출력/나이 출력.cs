using System;

public class Solution {
    public int solution(int age) {
        int answer = 0;
        for(int i = 0 ; i < age -1 ; i++)
        {
            answer = i + 1; 
        }

        return 2022 - answer;
    }
}