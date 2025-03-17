#include <stdio.h>
#include <stdlib.h>

// 예시 테스트를 위한 main 함수
int main(void) {
    int num = 0;
    scanf("%d", &num);

    // num이 4의 배수인지 확인 (문제 의도에 따라)
    if (num % 4 != 0) {
        printf("Input is not divisible by 4\n");
        return 1;
    }

    int iterations = num / 4;
    // 각 반복마다 "long " (5글자)가 추가되고 마지막에 "int" (3글자)가 추가됨
    // 종료 문자 1개를 더 고려하여 총 필요한 크기를 계산
    int needed_size = iterations * 5 + 3 + 1;

    char *str = malloc(needed_size);
    if (str == NULL) {
        fprintf(stderr, "Memory allocation error\n");
        return 1;
    }

    int z = 0;
    for (int i = 0; i < iterations; i++) {
        if(num % 4 == 0) {
            for(int x = 0 ; x < 1 ; x++){
                str[z++] = 'l';
                str[z++] = 'o';
                str[z++] = 'n';
                str[z++] = 'g';
                str[z++] = ' ';
            }
        }
    }
    str[z++] = 'i';
    str[z++] = 'n';
    str[z++] = 't';
    str[z] = '\0';

    printf("%s\n", str);

    return 0;
}
