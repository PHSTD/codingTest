#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int count = (n + 1) / 2;

    int* answer = (int*)malloc(count * sizeof(int));
    if (!answer) return NULL; 

    for (int i = 0; i < count; i++) {
        answer[i] = 2 * i + 1;
    }

    return answer;
}