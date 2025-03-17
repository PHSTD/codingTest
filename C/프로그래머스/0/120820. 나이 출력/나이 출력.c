#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int age) {
    int answer = 0;
    for(int i = 0 ; i < age -1 ; i++){
        answer += 1;
    }
    return 2022- answer;
}