#include <stdio.h>

int main(void) {
    int N, M;
    scanf("%d %d", &N, &M);

    char arr[101];
    for(int i = 1; i <= N ; i++){
        arr[i] = i;
    }

    int a, b;
    for (int k = 0; k < M; k++) {
        scanf("%d %d", &a, &b);
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

    for (int i = 1; i <= N; i++) {
        printf("%d ", arr[i]);
    }


    return 0;
}