#include <stdio.h>

int main() {
    int n;
    double scores[1000]; // 점수 최대 1000개 저장 가능
    double max = 0.0, sum = 0.0;

    // 점수 개수 입력
    scanf("%d", &n);

    // 점수 입력 및 최댓값 찾기
    for (int i = 0; i < n; i++) {
        scanf("%lf", &scores[i]);
        if (scores[i] > max) {
            max = scores[i];
        }
    }

    // 점수 조작해서 합계 구하기
    for (int i = 0; i < n; i++) {
        scores[i] = (scores[i] / max) * 100;
        sum += scores[i];
    }

    // 새로운 평균 출력
    printf("%.2f\n", sum / n);

    return 0;
}