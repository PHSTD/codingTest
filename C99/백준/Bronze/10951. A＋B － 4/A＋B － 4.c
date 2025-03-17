#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;

    while (scanf("%d %d", &a, &b) != -1) {
        printf("%d \n", a + b);
    }

	return 0;
}