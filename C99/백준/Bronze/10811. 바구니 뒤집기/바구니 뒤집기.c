#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int baskets[N];
    for (int i = 0; i < N; i++) {
        baskets[i] = i + 1;
    }

    for (int m = 0; m < M; m++) {
        int i, j;
        scanf("%d %d", &i, &j);
        i--; 
        j--;

        while (i < j) {
            int temp = baskets[i];
            baskets[i] = baskets[j];
            baskets[j] = temp;
            i++;
            j--;
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", baskets[i]);
    }
    printf("\n");

    return 0;
}