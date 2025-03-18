#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int solution(int n) {
    int g = gcd(6, n);
    return n / g;
}