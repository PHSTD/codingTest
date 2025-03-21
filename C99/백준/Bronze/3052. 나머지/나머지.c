#include <stdio.h>

int main() {
    int seen[42] = {0};  // 0~41까지의 나머지를 체크
    int num;
    
    // 10개의 수를 입력받아 각 수의 42로 나눈 나머지를 체크
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        seen[num % 42] = 1;
    }
    
    // 서로 다른 나머지의 개수 계산
    int count = 0;
    for (int i = 0; i < 42; i++) {
        if (seen[i])
            count++;
    }
    
    printf("%d\n", count);
    
    return 0;
}
