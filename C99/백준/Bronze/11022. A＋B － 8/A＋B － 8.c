#include <stdio.h>

// 예시 테스트를 위한 main 함수
int main(void) {
    int num = 0;
    scanf("%d", &num);

    int lcount = 1;
    for (int i = 0; i < num; i++) {
        int a = 0;
        int b = 0;
        scanf("%d %d", &a , &b);
        int total = a + b;
        printf("Case #%d: %d + %d = %d\n",lcount, a, b, total);
        lcount++;
    }

    return 0;
}
