using System;

public class Solution {
    public int solution(int angle) {
        int answer = 0;
        if (angle > -1 && angle < 90)
        {
            answer = 1;
        } 
        else if (angle >= 91 && angle < 180)
        {
            answer = 3;
        }
        else if (angle == 90)
        {
            answer = 2;
        } 
        else if(angle == 180)
        {
            answer  = 4;
        }
        
        return answer;


    }
}