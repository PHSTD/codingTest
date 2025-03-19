#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
 // 배열이 1개일 경우 그 값이 최빈값
    if (array_len == 1) {
        return array[0];
    }

    // 정렬 (버블 정렬)
    for (size_t i = 0; i < array_len - 1; i++) {
        for (size_t j = i + 1; j < array_len; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    // 최빈값 찾기
    int max_count = 0, current_count = 1, max_value = array[0], is_duplicate = 0;
    int answer = max_value;  // 최빈값을 저장할 변수

    for (size_t i = 1; i < array_len; i++) {
        if (array[i] == array[i - 1]) {
            current_count++;  // 같은 숫자 개수 증가
        } else {
            current_count = 1;  // 새로운 숫자 시작
        }

        if (current_count > max_count) {
            max_count = current_count;
            answer = array[i];
            is_duplicate = 0;
        } else if (current_count == max_count) {
            is_duplicate = 1;
        }
    }

    return is_duplicate ? -1 : answer;
}