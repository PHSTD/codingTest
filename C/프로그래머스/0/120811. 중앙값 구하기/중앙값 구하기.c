#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
     for (int i = 0; i < (int)array_len - 1; i++) {
        for (int j = i + 1; j < (int)array_len; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    if (array_len % 2 == 1) {
        return array[array_len / 2];
    }
    else {
        int mid1 = array[array_len / 2 - 1];
        int mid2 = array[array_len / 2];
        return (mid1 + mid2) / 2;
    }
}