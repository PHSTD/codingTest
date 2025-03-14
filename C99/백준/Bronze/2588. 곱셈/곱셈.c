#include <stdio.h>

int main() {
    long A, B, n1, n2, n3 = 0;

    scanf("%ld %ld", &A, &B);

    n1 = A * (B % 10);
    n2 = A * (B / 10 % 10);
    n3 = A * (B / 100 % 10);

    printf("%ld\n", n1);
    printf("%ld\n", n2);
    printf("%ld\n", n3);
    printf("%ld\n", A * B);

    return 0;
}
