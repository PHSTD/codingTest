#include <stdio.h>

int main() {
    long h, m, t = 0;
    scanf("%ld %ld %ld", &h, &m, &t);

    h += t / 60;
    m += t % 60;

    if (m >= 60) {
        ++h;
        m -= 60;
    }

    if (h >= 24) {
        h -= 24;
    }

    printf("%ld %ld\n", h, m);

    return 0;
}